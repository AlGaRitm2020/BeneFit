

from main import *



class Functions(MainWindow):
    # обновить информацию о входе в аккаунт
    def update_login(self, ID, LOGIN):
        if ID == 0:
            if self.language == 'ru':
                self.pushButton_sign.setText("Вход")
                self.btn_login.setText("Вход")
            else:
                self.pushButton_sign.setText("Sign in")
                self.btn_login.setText("Sign in")

            self.label_menu_login.setText('')
            self.label_name.setText("")
        else:
            if self.language == 'ru':
                self.pushButton_sign.setText("Выход")
                self.btn_login.setText("Выход")
            else:
                self.pushButton_sign.setText("Sign out")
                self.btn_login.setText("Sign out")
            self.label_name.setText(LOGIN)
            self.label_menu_login.setText(LOGIN)

    # обновить раздел калькулятр согласно данным пользователя
    def update_calculator(self, ID):
        
        # подключение к базе данных информации о пользователе
        with sqlite3.connect('db/dataBase2.db') as db:

            # создание курсора
            cursor = db.cursor()

            info = cursor.execute(
                f"""SELECT * FROM info WHERE ID = {ID}""").fetchall()[0]

        # импортируем рост, вес, возраст из БД
        self.spinBox_height.setValue(info[1])
        self.spinBox_weight.setValue(info[2])
        self.spinBox_age.setValue(info[3])

        # импортируем пол из БД
        if info[4]:
            self.radioButton_male.setChecked(True)
            self.male = True
            if self.check is True:
                self.groupBox_2.hide()
        else:
            self.radioButton_female.setChecked(True)
            self.male = False
            if self.check is True:
                self.groupBox_2.show()

        # импортируем активность из БД
        self.comboBox_activity.setCurrentIndex(info[5])

        # импортируем активность из БД
        self.spinBox_wrist.setValue(info[6])

        # импортируем значение чекбокса из БД
        if info[7]:
            self.check = True
            self.groupBox.show()
            self.groupBox_4.show()
            if self.male == False:
                self.groupBox_2.show()
        else:
            self.check = False
            self.groupBox.hide()
            self.groupBox_4.hide()
            self.groupBox_2.hide()
        self.checkBox_fat.setChecked(info[7])

        # импортируем талию, шею, бедра из БД
        self.spinBox_waist.setValue(info[8])
        self.spinBox_neck.setValue(info[9])
        self.spinBox_hip.setValue(info[10])

    # обновить раздел тренировок согласно данным пользователя
    def update_training(self, ID):
        with sqlite3.connect('db/dataBase2.db') as db:
            # создание курсора
            cursor = db.cursor()
            for day, daily_list in enumerate(self.objects_list_of_quick_start):
                # получить данные о тренировочном дне данного пользователя
                data = cursor.execute(
                f"""SELECT * FROM quick_start WHERE id = {ID} AND day = {day}""").fetchall()
                for row, info in enumerate(daily_list):
                    info[0].setChecked(data[0][row+2])
                    info[1].setValue(data[0][row+7])
                    info[2].setValue(data[0][row+12])

            # открыть полследний завершенный тренировочный день
            self.tabWidget.setCurrentIndex(cursor.execute(
                f"""SELECT current_training FROM info WHERE id = {ID}""").fetchall()[0][0])

    # обновить подраздел рекомендации согласно данным пользователя
    def update_recommendations(self, ID):
        if ID != 0:
            self.stackedWidget_personal_recommendations.setCurrentIndex(1)

            with sqlite3.connect('db/dataBase2.db') as db:
                cursor = db.cursor()
                self.body_type = cursor.execute(
                f"""SELECT type FROM info WHERE id = {ID}""").fetchall()[0][0]


        else:
            self.stackedWidget_personal_recommendations.setCurrentIndex(0)

    # открыть/закрыть меню с навигацией
    def toggleMenu(self, maxWidth, enable, login, language):
        if enable:

            # получить ширину фрейма
            width = self.frame_left_menu.width()

            # установить переменные максимальной и стандартной ширины
            maxExtend = maxWidth
            standard = 70

            # изменить ширину 
            if width == standard:
                widthExtended = maxExtend
                # перевести на язык пользователя навигацию с флагом "show_header"
                Functions.translate(self, 'show_header')

                # показать кнопку логина и имя пользователя
                self.btn_login.show()
                self.label_menu_login.show()
                 
            else:
                
                widthExtended = standard

                # скрыть текст кнопок навигации
                self.btn_page_1.setText('')
                self.btn_page_2.setText('')
                self.btn_page_3.setText('')
                self.btn_page_4.setText('')
                self.btn_page_5.setText('')
                self.btn_page_6.setText('')

                # скрыть кнопку логина и имя пользователя
                self.btn_login.hide()
                self.label_menu_login.hide()
                


            # анимации нажатия на кнопку открытия навигации
            self.animation = QPropertyAnimation(self.frame_left_menu, b"minimumWidth")
            self.animation.setDuration(300)
            self.animation.setStartValue(width)
            self.animation.setEndValue(widthExtended)
            self.animation.setEasingCurve(QtCore.QEasingCurve.InOutQuart)
            self.animation.start()


    def forward(self, login, language):

        # нажатие на кнопку открытия навигации
        self.Btn_Toggle.clicked.connect(lambda: Functions.toggleMenu(self, 200, True, login, language))

        # PAGE 1
        self.btn_page_1.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_1))

        # PAGE2
        self.btn_page_2.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_2))

        # PAGE3
        self.btn_page_3.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_3))

        # PAGE4
        self.btn_page_4.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_4))

        # PAGE5
        self.btn_page_5.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_5))

        # PAGE6
        self.btn_page_6.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_6))


        self.btn_login.clicked.connect(self.open_login)


    def translate(self, *flag):
        # изменить язык в зависимости от настроек 
        # не менять язык если есть спец доступ
        if flag[0] != 'order':
            if self.comboBox_language.currentIndex() == 0:
                self.language = "ru"
            else:
                self.language = "en"

        # формирование списка заголовков
        if self.language == "ru":
            self.titles = ["Главная", "Калькулятор", "Тренировки", "Питание", "О приложении", "Настройки"]
        else:
            self.titles = ["Home", "Calculator", "Training", "Nutrition", "About", "Settings"]

        # перевести на английский язык
        if self.language == "en":
            # калькулятор
            self.pushButton_calculate.setText("Calculate and Save")
            self.label_waist.setText("Waist, cm             ")
            self.label_neck.setText("Neck, cm                ")
            self.label_hip.setText("Hip, cm                  ")
            self.label_wrist.setText("Wrist, cm")
            self.label_height.setText("Height, cm")
            self.label_weight.setText("Weight, kg")
            self.label_age.setText("Age, years              ")
            self.label_gender.setText("Gender")
            self.radioButton_male.setText("Male")
            self.radioButton_female.setText("Female")
            self.label_activity.setText("Activity")
            self.comboBox_activity.setItemText(0, "Very low")
            self.comboBox_activity.setItemText(1, "Low")
            self.comboBox_activity.setItemText(2, "Average")
            self.comboBox_activity.setItemText(3, "High")
            self.comboBox_activity.setItemText(4, "Very high")
            self.label_check_fat.setText("Calculate fat %")
            self.label_IMT.setText("Body Mass Index")
            self.label_metabolism.setText("Intake of calories")
            self.label_hr_max.setText("Heart Rate Max")
            self.label_hr_train.setText("Training Heart Rate")
            self.label_water.setText("Daily Water Intake")
            self.label_type.setText("Body type")
            self.label_fat_percent.setText("fat %                     ")

            # главная
            self.pushButton_calculator.setText("Calculator")
            self.pushButton_training.setText("Training")
            self.pushButton_nutrition.setText("Nutrition")
            self.pushButton_info.setText("About app")
            self.pushButton_sign.setText("Sign in") 

            # показать навигацию
            if flag[0] == 'show_header':
                self.btn_page_1.setText(" Home")
                self.btn_page_2.setText(" Calculator")
                self.btn_page_3.setText(" Training")
                self.btn_page_4.setText(" Nutrition")
                self.btn_page_5.setText(" About app")
                self.btn_page_6.setText(" Settings")
                self.pushButton_sign.setText(" Sign in") 

            
            # питание
            self.pushButton_add.setText("Add")
            self.pushButton_clear.setText("Clear")
            self.pushButton_save.setText("Save as")
            self.pushButton_load.setText("Load")
            # MainWindow.update_table(self)

            # описание
            self.stackedWidget_description.setCurrentIndex(0)

            # настройки
            self.comboBox_language.setCurrentIndex(1)
           

            
        
        # перевести на английский язык
        else:
            # калькулятор
            self.pushButton_calculate.setText("Рассчитать и сохранить")
            self.label_waist.setText("Талия, см             ")
            self.label_neck.setText("Шея, см                ")
            self.label_hip.setText("Бёдра, см              ")
            self.label_wrist.setText("Запястья, см")
            self.label_height.setText("Рост, см")
            self.label_weight.setText("Масса, кг")
            self.label_age.setText("Возраст, лет")
            self.label_gender.setText("Пол")
            self.radioButton_male.setText("Мужской")
            self.radioButton_female.setText("Женский")
            self.label_activity.setText("Активность")
            self.comboBox_activity.setItemText(0, "Очень низкая")
            self.comboBox_activity.setItemText(1, "Низкая")
            self.comboBox_activity.setItemText(2, "Средняя")
            self.comboBox_activity.setItemText(3, "Высокая")
            self.comboBox_activity.setItemText(4, "Очень высокая")
            self.label_check_fat.setText("Расчитать % жира")
            self.label_IMT.setText("Индекс Массы Тела")
            self.label_metabolism.setText("Норма калорий")
            self.label_hr_max.setText("ЧСС максимум")
            self.label_hr_train.setText("ЧСС тренировочный")
            self.label_water.setText("Норма воды в день")
            self.label_type.setText("Тип телосложения")
            self.label_fat_percent.setText("% жира                    ")

            # главная
            self.pushButton_calculator.setText("Калькулятор")
            self.pushButton_training.setText("Тренировки")
            self.pushButton_nutrition.setText("Питание")
            self.pushButton_info.setText("О приложении")
            # self.pushButton_sign.setText("Вход")

            # показать навигацию
            if flag[0] == 'show_header':
                self.btn_page_1.setText(" Главная")
                self.btn_page_2.setText(" Калькулятор")
                self.btn_page_3.setText(" Тренировки")
                self.btn_page_4.setText(" Питание")
                self.btn_page_5.setText(" Описание")
                self.btn_page_6.setText(" Настройки")

            # питание
            self.pushButton_add.setText("Добавить")
            self.pushButton_clear.setText("Очистить")
            self.pushButton_save.setText("Сохранить")
            self.pushButton_load.setText("Загрузить")

            # описание
            self.stackedWidget_description.setCurrentIndex(1)

            # настройки
            self.comboBox_language.setCurrentIndex(0)
