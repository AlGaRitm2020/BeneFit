################################################################################
##
## BY: WANDERSON M.PIMENTA
## PROJECT MADE WITH: Qt Designer and PySide2
## V: 1.0.0
##
################################################################################

## ==> GUI FILE
from main import *

def open_login():
        global log
        log = LoginWindow('ru')

class Functions(MainWindow):
    def update_calculator(self, ID):
        
        if ID:
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
    def toggleMenu(self, maxWidth, enable):
        if enable:

            # GET WIDTH
            width = self.frame_left_menu.width()
            maxExtend = maxWidth
            standard = 70

            # SET MAX WIDTH
            if width == 70:
                widthExtended = maxExtend
                self.btn_page_1.setText(" Главная")
                self.btn_page_2.setText(" Калькулятор")
                self.btn_page_3.setText(" Тренировки")
                self.btn_page_4.setText(" Питание")
                self.btn_page_5.setText(" Описание")
                self.btn_page_6.setText(" Настройки")
                self.btn_login.show()
                self.label_menu_login.setText("login")
                
            else:
                self.btn_login.hide()
                self.label_menu_login.setText("")
                widthExtended = standard
                self.btn_page_1.setText("")
                self.btn_page_2.setText("")
                self.btn_page_3.setText("")
                self.btn_page_4.setText("")
                self.btn_page_5.setText("")
                self.btn_page_6.setText("")
                


            # ANIMATION
            self.animation = QPropertyAnimation(self.frame_left_menu, b"minimumWidth")
            self.animation.setDuration(400)
            self.animation.setStartValue(width)
            self.animation.setEndValue(widthExtended)
            self.animation.setEasingCurve(QtCore.QEasingCurve.InOutQuart)
            self.animation.start()

            self.animation2 = QPropertyAnimation(self.btn_page_2, b"text")
            self.animation2.setDuration(400)
            self.animation2.setStartValue("")
            self.animation2.setEndValue("widthExtended")
            self.animation2.setEasingCurve(QtCore.QEasingCurve.InOutQuart)
            self.animation.start()

    def forward(self):
        ## TOGGLE/BURGUER MENU
        ########################################################################

      
        self.Btn_Toggle.clicked.connect(lambda: Functions.toggleMenu(self, 200, True))

        # self.Btn_Toggle.clicked.connect(lambda: Functions.toggleMenu(self, 250, True))

        # PAGE 1
        self.btn_page_1.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_1))

        # PAGE2
        self.btn_page_2.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_2))
        # PAGE3
        self.btn_page_3.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_3))

        self.btn_page_4.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_4))

        self.btn_page_5.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_5))

        self.btn_page_6.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_6))


        # self.pushButton_sign.clicked.connect(self.open_login())
        # self.pushButton_calculator.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_2))
        # self.pushButton_training.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_3))
        # self.pushButton_nutrition.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_4))
        # self.pushButton_info.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_5))


        # self.btn_login.clicked.connect(self.open_login)
    # def open_login(self):
    #     global log
    #     log = LoginWindow('ru')

    def translate(self):
        if self.language == "en":
            self.setWindowTitle("Calculator")
            self.pushButton.setText("Calculate")
            self.label_7.setText("Waist, cm             ")
            self.label_8.setText("Neck, cm                ")
            self.label_11.setText("Hip, cm                  ")
            self.label_2.setText("Height, cm")
            self.label_3.setText("Weight, kg")
            self.label_4.setText("Age, years              ")
            self.label_5.setText("Gender")
            self.radioButton_male.setText("Male")
            self.radioButton_female.setText("Female")
            self.label_6.setText("Activity")
            self.comboBox_activity.setItemText(0, "Very low")
            self.comboBox_activity.setItemText(1, "Low")
            self.comboBox_activity.setItemText(2, "Average")
            self.comboBox_activity.setItemText(3, "High")
            self.comboBox_activity.setItemText(4, "Very high")
            self.label_9.setText("Calculate fat %")
            self.label_10.setText("Body Mass Index")
            self.label_12.setText("Resting Metabolic")
            self.label_13.setText("Heart Rate Max")
            self.label_14.setText("Training Heart Rate")
            self.label_15.setText("Daily Water Intake")
            self.label_16.setText("fat %                     ")
            self.pushButton_2.setText("Calculator")
            self.pushButton_3.setText("Main")
        else:
            self.setWindowTitle('Калькулятор')

            # сменить язык
    def translate(self):
        if self.sender().text() == "EN":
            self.language = "en"
            self.pushButton_calculator.setText("Calculator")
            self.pushButton_training.setText("Training")
            self.pushButton_nutrition.setText("Nutrition")
            self.setWindowTitle("Main")
        else:
            self.language = "ru"
            self.pushButton_calculator.setText("Калькулятор")
            self.pushButton_training.setText("Тренировки")
            self.pushButton_nutrition.setText("Питание")
            self.setWindowTitle("Главная")
