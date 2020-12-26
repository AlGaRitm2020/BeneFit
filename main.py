
import sys

# импорт PyQt5 объектов
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

# импорт других классов
from functions import *
from login import *
from add import *
from insert import *

# импорт интерфейса главного окна
from design.ui_main import Ui_MainWindow

# импорт библиотек баз данных
import sqlite3
import csv

# импорт математических функций
from math import log10

# импорт файла ресурсов
import resourse

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        # покключить интерфейс
        self.setupUi(self)

        #
        # ГЛАВНАЯ СТРАНИЦА
        #


        # вход в последний активный аккаунт
        global ID, LOGIN
        with sqlite3.connect('db/dataBase2.db') as db:
            cursor = db.cursor()
            ID = cursor.execute(f""" SELECT id FROM current_id""").fetchall()[0][0]
            LOGIN = cursor.execute(f""" SELECT login FROM login WHERE ID = {ID}""").fetchall()[0][0]
            self.language = cursor.execute(f""" SELECT language FROM login WHERE ID = {ID}""").fetchall()[0][0]
            
        # обновить интерфейс под пользователя
        Functions.update_login(self, ID, LOGIN)
        

        # навигация по приложению
        # скрыть дополнительные поля    
        self.btn_login.hide()
        self.label_menu_login.hide()
        
        # функции переходов из меню 
        Functions.forward(self, LOGIN, self.language)

        # обработка смены заголовка после смены страницы
        self.stackedWidget.currentChanged['int'].connect(lambda: self.label_header.setText(f"{self.titles[self.stackedWidget.currentIndex()]}"))


        # переходы из главной страницы
        self.pushButton_sign.clicked.connect(self.open_login)
        self.pushButton_calculator.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_2))
        self.pushButton_training.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_3))
        self.pushButton_nutrition.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_4))
        self.pushButton_info.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_5))

        # установить иконку окна
        self.setWindowIcon(QIcon("BeneFit.ico"))
        self.setWindowTitle("BeneFit")


        
        # 
        # КАЛЬКУЛЯТОР
        #

        # перемунные
        # создать переменную с языком

        # Functions.translate(self)
        self.btn_page_1.setText('')
        self.btn_page_2.setText('')
        self.btn_page_3.setText('')
        self.btn_page_4.setText('')
        self.btn_page_5.setText('')
        self.btn_page_6.setText('')

        # обнулить чекбокс
        self.check = False
        # пол
        self.male = self.radioButton_male.isChecked()

        # скрыть дополнительные поля
        self.groupBox.hide()
        self.groupBox_2.hide()
        self.groupBox_4.hide()

        # события
        # рассчитать
        self.pushButton_calculate.clicked.connect(self.calculate)
        # показать доп поля
        self.checkBox_fat.clicked.connect(self.show_extra)
        # перейти в функцию сменить пол
        self.radioButton_male.clicked.connect(self.gender)
        self.radioButton_female.clicked.connect(self.gender)

        # обновить данные пользователя в калькуляторе
        Functions.update_calculator(self, ID)

        self.show()

        # 
        # ТРЕНИРОВКИ
        #
        
        # смена тренировки на описание и наоборот
        self.pushButton_quickStart_help.clicked.connect(lambda:self.stackedWidget_training.setCurrentIndex((self.stackedWidget_training.currentIndex()+1)%2))
        
        # список всех полей для заполнения данных
        self.objects_list_of_quick_start = [
        # первый день
        [
        (self.checkBox_exersize_1_1,self.spinBox_extraWeight_1_1, self.spinBox_reps_1_1), 
        (self.checkBox_exersize_2_1,self.spinBox_extraWeight_2_1, self.spinBox_reps_2_1), 
        (self.checkBox_exersize_3_1,self.spinBox_extraWeight_3_1, self.spinBox_reps_3_1), 
        (self.checkBox_exersize_4_1,self.spinBox_extraWeight_4_1, self.spinBox_reps_4_1), 
        (self.checkBox_exersize_5_1,self.spinBox_extraWeight_5_1, self.spinBox_reps_5_1)
        ], 

        [
        (self.checkBox_exersize_1_2,self.spinBox_extraWeight_1_2, self.spinBox_reps_1_2), 
        (self.checkBox_exersize_2_2,self.spinBox_extraWeight_2_2, self.spinBox_reps_2_2), 
        (self.checkBox_exersize_3_2,self.spinBox_extraWeight_3_2, self.spinBox_reps_3_2), 
        (self.checkBox_exersize_4_2,self.spinBox_extraWeight_4_2, self.spinBox_reps_4_2), 
        (self.checkBox_exersize_5_2,self.spinBox_extraWeight_5_2, self.spinBox_reps_5_2)
        ],

        # третий день
        [
        (self.checkBox_exersize_1_3,self.spinBox_extraWeight_1_3, self.spinBox_reps_1_3), 
        (self.checkBox_exersize_2_3,self.spinBox_extraWeight_2_3, self.spinBox_reps_2_3), 
        (self.checkBox_exersize_3_3,self.spinBox_extraWeight_3_3, self.spinBox_reps_3_3), 
        (self.checkBox_exersize_4_3,self.spinBox_extraWeight_4_3, self.spinBox_reps_4_3), 
        (self.checkBox_exersize_5_3,self.spinBox_extraWeight_5_3, self.spinBox_reps_5_3)
        ],
        # четвертый день
        [
        (self.checkBox_exersize_1_4,self.spinBox_extraWeight_1_4, self.spinBox_reps_1_4), 
        (self.checkBox_exersize_2_4,self.spinBox_extraWeight_2_4, self.spinBox_reps_2_4), 
        (self.checkBox_exersize_3_4,self.spinBox_extraWeight_3_4, self.spinBox_reps_3_4), 
        (self.checkBox_exersize_4_4,self.spinBox_extraWeight_4_4, self.spinBox_reps_4_4), 
        (self.checkBox_exersize_5_4,self.spinBox_extraWeight_5_4, self.spinBox_reps_5_4)
        ],
        # пятый день
        [
        (self.checkBox_exersize_1_5,self.spinBox_extraWeight_1_5, self.spinBox_reps_1_5), 
        (self.checkBox_exersize_2_5,self.spinBox_extraWeight_2_5, self.spinBox_reps_2_5), 
        (self.checkBox_exersize_3_5,self.spinBox_extraWeight_3_5, self.spinBox_reps_3_5), 
        (self.checkBox_exersize_4_5,self.spinBox_extraWeight_4_5, self.spinBox_reps_4_5), 
        (self.checkBox_exersize_5_5,self.spinBox_extraWeight_5_5, self.spinBox_reps_5_5)
        ], 

        # шестой день
        [
        (self.checkBox_exersize_1_6,self.spinBox_extraWeight_1_6, self.spinBox_reps_1_6), 
        (self.checkBox_exersize_2_6,self.spinBox_extraWeight_2_6, self.spinBox_reps_2_6), 
        (self.checkBox_exersize_3_6,self.spinBox_extraWeight_3_6, self.spinBox_reps_3_6), 
        (self.checkBox_exersize_4_6,self.spinBox_extraWeight_4_6, self.spinBox_reps_4_6), 
        (self.checkBox_exersize_5_6,self.spinBox_extraWeight_5_6, self.spinBox_reps_5_6)
        ],

        # седьмой день
        [
        (self.checkBox_exersize_1_7,self.spinBox_extraWeight_1_7, self.spinBox_reps_1_7), 
        (self.checkBox_exersize_2_7,self.spinBox_extraWeight_2_7, self.spinBox_reps_2_7), 
        (self.checkBox_exersize_3_7,self.spinBox_extraWeight_3_7, self.spinBox_reps_3_7), 
        (self.checkBox_exersize_4_7,self.spinBox_extraWeight_4_7, self.spinBox_reps_4_7), 
        (self.checkBox_exersize_5_7,self.spinBox_extraWeight_5_7, self.spinBox_reps_5_7)
        ],

        # восьмой день
        [
        (self.checkBox_exersize_1_8,self.spinBox_extraWeight_1_8, self.spinBox_reps_1_8), 
        (self.checkBox_exersize_2_8,self.spinBox_extraWeight_2_8, self.spinBox_reps_2_8), 
        (self.checkBox_exersize_3_8,self.spinBox_extraWeight_3_8, self.spinBox_reps_3_8), 
        (self.checkBox_exersize_4_8,self.spinBox_extraWeight_4_8, self.spinBox_reps_4_8), 
        (self.checkBox_exersize_5_8,self.spinBox_extraWeight_5_8, self.spinBox_reps_5_8)
        ],

        # девятый день
        [
        (self.checkBox_exersize_1_9,self.spinBox_extraWeight_1_9, self.spinBox_reps_1_9), 
        (self.checkBox_exersize_2_9,self.spinBox_extraWeight_2_9, self.spinBox_reps_2_9), 
        (self.checkBox_exersize_3_9,self.spinBox_extraWeight_3_9, self.spinBox_reps_3_9), 
        (self.checkBox_exersize_4_9,self.spinBox_extraWeight_4_9, self.spinBox_reps_4_9), 
        (self.checkBox_exersize_5_9,self.spinBox_extraWeight_5_9, self.spinBox_reps_5_9)
        ],

        # десятый день
        [
        (self.checkBox_exersize_1_10,self.spinBox_extraWeight_1_10, self.spinBox_reps_1_10), 
        (self.checkBox_exersize_2_10,self.spinBox_extraWeight_2_10, self.spinBox_reps_2_10), 
        (self.checkBox_exersize_3_10,self.spinBox_extraWeight_3_10, self.spinBox_reps_3_10), 
        (self.checkBox_exersize_4_10,self.spinBox_extraWeight_4_10, self.spinBox_reps_4_10), 
        (self.checkBox_exersize_5_10,self.spinBox_extraWeight_5_10, self.spinBox_reps_5_10)
        ],

        # одиннадцатый день
        [
        (self.checkBox_exersize_1_11,self.spinBox_extraWeight_1_11, self.spinBox_reps_1_11), 
        (self.checkBox_exersize_2_11,self.spinBox_extraWeight_2_11, self.spinBox_reps_2_11), 
        (self.checkBox_exersize_3_11,self.spinBox_extraWeight_3_11, self.spinBox_reps_3_11), 
        (self.checkBox_exersize_4_11,self.spinBox_extraWeight_4_11, self.spinBox_reps_4_11), 
        (self.checkBox_exersize_5_11,self.spinBox_extraWeight_5_11, self.spinBox_reps_5_11)
        ], 

        # двеннадцатый день
        [
        (self.checkBox_exersize_1_12,self.spinBox_extraWeight_1_12, self.spinBox_reps_1_12), 
        (self.checkBox_exersize_2_12,self.spinBox_extraWeight_2_12, self.spinBox_reps_2_12), 
        (self.checkBox_exersize_3_12,self.spinBox_extraWeight_3_12, self.spinBox_reps_3_12), 
        (self.checkBox_exersize_4_12,self.spinBox_extraWeight_4_12, self.spinBox_reps_4_12), 
        (self.checkBox_exersize_5_12,self.spinBox_extraWeight_5_12, self.spinBox_reps_5_12)
        ], 

        # триннадцатый день
        [
        (self.checkBox_exersize_1_13,self.spinBox_extraWeight_1_13, self.spinBox_reps_1_13), 
        (self.checkBox_exersize_2_13,self.spinBox_extraWeight_2_13, self.spinBox_reps_2_13), 
        (self.checkBox_exersize_3_13,self.spinBox_extraWeight_3_13, self.spinBox_reps_3_13), 
        (self.checkBox_exersize_4_13,self.spinBox_extraWeight_4_13, self.spinBox_reps_4_13), 
        (self.checkBox_exersize_5_13,self.spinBox_extraWeight_5_13, self.spinBox_reps_5_13)
        ], 

        # четырнадцатый день
        [
        (self.checkBox_exersize_1_14,self.spinBox_extraWeight_1_14, self.spinBox_reps_1_14), 
        (self.checkBox_exersize_2_14,self.spinBox_extraWeight_2_14, self.spinBox_reps_2_14), 
        (self.checkBox_exersize_3_14,self.spinBox_extraWeight_3_14, self.spinBox_reps_3_14), 
        (self.checkBox_exersize_4_14,self.spinBox_extraWeight_4_14, self.spinBox_reps_4_14), 
        (self.checkBox_exersize_5_14,self.spinBox_extraWeight_5_14, self.spinBox_reps_5_14)
        ], 

        # пятнадцатый день
        [
        (self.checkBox_exersize_1_15,self.spinBox_extraWeight_1_15, self.spinBox_reps_1_15), 
        (self.checkBox_exersize_2_15,self.spinBox_extraWeight_2_15, self.spinBox_reps_2_15), 
        (self.checkBox_exersize_3_15,self.spinBox_extraWeight_3_15, self.spinBox_reps_3_15), 
        (self.checkBox_exersize_4_15,self.spinBox_extraWeight_4_15, self.spinBox_reps_4_15), 
        (self.checkBox_exersize_5_15,self.spinBox_extraWeight_5_15, self.spinBox_reps_5_15)
        ], 

        # шестнадцатый день
        [
        (self.checkBox_exersize_1_16,self.spinBox_extraWeight_1_16, self.spinBox_reps_1_16), 
        (self.checkBox_exersize_2_16,self.spinBox_extraWeight_2_16, self.spinBox_reps_2_16), 
        (self.checkBox_exersize_3_16,self.spinBox_extraWeight_3_16, self.spinBox_reps_3_16), 
        (self.checkBox_exersize_4_16,self.spinBox_extraWeight_4_16, self.spinBox_reps_4_16), 
        (self.checkBox_exersize_5_16,self.spinBox_extraWeight_5_16, self.spinBox_reps_5_16)
        ], 

        # семнадцатый день
        [
        (self.checkBox_exersize_1_17,self.spinBox_extraWeight_1_17, self.spinBox_reps_1_17), 
        (self.checkBox_exersize_2_17,self.spinBox_extraWeight_2_17, self.spinBox_reps_2_17), 
        (self.checkBox_exersize_3_17,self.spinBox_extraWeight_3_17, self.spinBox_reps_3_17), 
        (self.checkBox_exersize_4_17,self.spinBox_extraWeight_4_17, self.spinBox_reps_4_17), 
        (self.checkBox_exersize_5_17,self.spinBox_extraWeight_5_17, self.spinBox_reps_5_17)
        ], 

        # восемнадцатый день
        [
        (self.checkBox_exersize_1_18,self.spinBox_extraWeight_1_18, self.spinBox_reps_1_18), 
        (self.checkBox_exersize_2_18,self.spinBox_extraWeight_2_18, self.spinBox_reps_2_18), 
        (self.checkBox_exersize_3_18,self.spinBox_extraWeight_3_18, self.spinBox_reps_3_18), 
        (self.checkBox_exersize_4_18,self.spinBox_extraWeight_4_18, self.spinBox_reps_4_18), 
        (self.checkBox_exersize_5_18,self.spinBox_extraWeight_5_18, self.spinBox_reps_5_18)
        ], 

        # девятнадцатый день
        [
        (self.checkBox_exersize_1_19,self.spinBox_extraWeight_1_19, self.spinBox_reps_1_19), 
        (self.checkBox_exersize_2_19,self.spinBox_extraWeight_2_19, self.spinBox_reps_2_19), 
        (self.checkBox_exersize_3_19,self.spinBox_extraWeight_3_19, self.spinBox_reps_3_19), 
        (self.checkBox_exersize_4_19,self.spinBox_extraWeight_4_19, self.spinBox_reps_4_19), 
        (self.checkBox_exersize_5_19,self.spinBox_extraWeight_5_19, self.spinBox_reps_5_19)
        ], 

        # двадцатый день
        [
        (self.checkBox_exersize_1_20,self.spinBox_extraWeight_1_20, self.spinBox_reps_1_20), 
        (self.checkBox_exersize_2_20,self.spinBox_extraWeight_2_20, self.spinBox_reps_2_20), 
        (self.checkBox_exersize_3_20,self.spinBox_extraWeight_3_20, self.spinBox_reps_3_20), 
        (self.checkBox_exersize_4_20,self.spinBox_extraWeight_4_20, self.spinBox_reps_4_20), 
        (self.checkBox_exersize_5_20,self.spinBox_extraWeight_5_20, self.spinBox_reps_5_20)
        ], 

        # двадцатьпервый день
        [
        (self.checkBox_exersize_1_21,self.spinBox_extraWeight_1_21, self.spinBox_reps_1_21), 
        (self.checkBox_exersize_2_21,self.spinBox_extraWeight_2_21, self.spinBox_reps_2_21), 
        (self.checkBox_exersize_3_21,self.spinBox_extraWeight_3_21, self.spinBox_reps_3_21), 
        (self.checkBox_exersize_4_21,self.spinBox_extraWeight_4_21, self.spinBox_reps_4_21), 
        (self.checkBox_exersize_5_21,self.spinBox_extraWeight_5_21, self.spinBox_reps_5_21)
        ]
        ]
        # списки столбцов в БД с дневником тренировок
        self.exersises = ["ex1_check", "ex2_check", "ex3_check", "ex4_check", "ex5_check"]
        self.weights = ['weight1', 'weight2', 'weight3', 'weight4', 'weight5']
        self.reps = ['reps1', 'reps1', 'reps3', 'reps4', 'reps5']

        # список кнопок 
        self.buttons_training = [self.pushButton_complete_1, self.pushButton_complete_2,
         self.pushButton_complete_3, self.pushButton_complete_4,self.pushButton_complete_5,
         self.pushButton_complete_6, self.pushButton_complete_7, self.pushButton_complete_8,
         self.pushButton_complete_9, self.pushButton_complete_10, self.pushButton_complete_11,
         self.pushButton_complete_12, self.pushButton_complete_13, self.pushButton_complete_14,
         self.pushButton_complete_15, self.pushButton_complete_16, self.pushButton_complete_17,
         self.pushButton_complete_18, self.pushButton_complete_19, self.pushButton_complete_20,
         self.pushButton_complete_21,]

        # сохнанение тренировок(21 кнопка)
        for btn in self.buttons_training:
            btn.clicked.connect(self.save_training)

        # обновить раздел тренировок согласно данным пользователя
        Functions.update_training(self, ID)

        #
        # архив упражнений

        # создание анимаций (gif)
        self.movie_squats = QMovie("img/gifs/squats2.gif")
        self.movie_front_squats = QMovie("img/gifs/front_squats.gif")
        self.movie_lunges = QMovie("img/gifs/lunges.gif")
        self.movie_leaning_forward = QMovie("img/gifs/leaning_forward.gif")
        self.movie_rise_calf = QMovie("img/gifs/rise_calf.gif")
        self.movie_twistings = QMovie("img/gifs/twistings.gif")
        self.movie_iverted_twistings = QMovie("img/gifs/inverted_twistings.gif")
        self.movie_vise_lift = QMovie("img/gifs/vise_lift.gif")
        self.movie_pushups = QMovie("img/gifs/pushups.gif")
        self.movie_bars_pushups = QMovie("img/gifs/bars_pushups.gif")
        self.movie_bench_pushups = QMovie("img/gifs/bench_pushups.gif")
        self.movie_chest_breading = QMovie("img/gifs/chest_breeding.gif")
        self.movie_delts_breading = QMovie("img/gifs/delts_breading.gif")
        self.movie_bench_press = QMovie("img/gifs/bench_press.gif")
        self.movie_front_delts = QMovie("img/gifs/front_delts.gif")
        self.movie_twistings = QMovie("img/gifs/twistings.gif")
        self.movie_pullups = QMovie("img/gifs/pullups_2.gif")
        self.movie_inverted_pullups = QMovie("img/gifs/inverted_pullups.gif")
        self.movie_hummers = QMovie("img/gifs/hummers.gif")
        self.movie_dumbbell_pull = QMovie("img/gifs/dumbbell pull.gif")
        self.movie_scars = QMovie("img/gifs/scars.gif")
        self.movie_oblique_twists = QMovie("img/gifs/oblique_twists.gif")
        self.movie_vise_knees = QMovie("img/gifs/vise_knees.gif")

        # присваивание label'ам анимайии
        self.label_gif_0.setMovie(self.movie_lunges)
        self.label_gif_1.setMovie(self.movie_bench_press)
        self.label_gif_2.setMovie(self.movie_oblique_twists)
        self.label_gif_3.setMovie(self.movie_hummers)
        self.label_gif_4.setMovie(self.movie_leaning_forward)
        self.label_gif_5.setMovie(self.movie_inverted_pullups)
        self.label_gif_6.setMovie(self.movie_iverted_twistings)
        self.label_gif_7.setMovie(self.movie_bars_pushups)
        self.label_gif_8.setMovie(self.movie_pushups)
        self.label_gif_9.setMovie(self.movie_bench_pushups)
        self.label_gif_11.setMovie(self.movie_pullups)
        self.label_gif_12.setMovie(self.movie_vise_knees)
        self.label_gif_13.setMovie(self.movie_vise_lift)
        self.label_gif_14.setMovie(self.movie_front_delts)
        self.label_gif_15.setMovie(self.movie_rise_calf)
        self.label_gif_16.setMovie(self.movie_squats)
        self.label_gif_17.setMovie(self.movie_chest_breading)
        self.label_gif_18.setMovie(self.movie_delts_breading)
        self.label_gif_19.setMovie(self.movie_twistings)
        self.label_gif_20.setMovie(self.movie_dumbbell_pull)
        self.label_gif_21.setMovie(self.movie_front_squats)
        self.label_gif_22.setMovie(self.movie_scars)
        
        # старт всех анимаций
        self.movie_squats.start()
        self.movie_front_squats.start()
        self.movie_lunges.start()
        self.movie_leaning_forward.start()
        self.movie_rise_calf.start()
        self.movie_twistings.start()
        self.movie_iverted_twistings.start()
        self.movie_vise_lift.start()
        self.movie_pushups.start()
        self.movie_bars_pushups.start()
        self.movie_bench_pushups.start()
        self.movie_chest_breading.start()
        self.movie_delts_breading.start()
        self.movie_bench_press.start()
        self.movie_front_delts.start()
        self.movie_twistings.start()
        self.movie_pullups.start()
        self.movie_inverted_pullups.start()
        self.movie_hummers.start()
        self.movie_dumbbell_pull.start()
        self.movie_scars.start()
        self.movie_vise_knees.start()
        self.movie_oblique_twists.start()
        
        # перейти во вкладку с конкретным упражнеием (gif-анимацией)
        self.listWidget_exersizes.clicked.connect(lambda :self.stackedWidget_gifs.setCurrentIndex(self.listWidget_exersizes.currentRow()))
    
        #
        # ПИТАНИЕ
        #

        #
        # Продукты питания

        # обнуление выбранных пользователем продуктов
        self.choice = []
        # создание списка всех данных
        self.li = []

        # получение пользовательских данных из csv файла
        with open('user_files/pfcc_user.csv', encoding="utf-8") as csvfile:
            reader = csv.reader(csvfile, delimiter=';', quotechar='"')

            for index, row in enumerate(reader):
                if row:
                    self.li.append((row[0], row[1], row[2], row[3], row[4]))

        # обновить таблицу пользователя
        MainWindow.update_table(self)
        # кнопки

        # "добавить"
        self.pushButton_add.clicked.connect(self.add)

        # "очистить"
        self.pushButton_clear.clicked.connect(self.clear)

        # "Добавить данные"
        self.pushButton_insert.clicked.connect(self.insert)

        # "сохранить"
        self.pushButton_save.clicked.connect(self.save)

        # "загрузить"
        self.pushButton_load.clicked.connect(self.load)

        # создать пользовательскую таблицу
        MainWindow.user_table(self)

        #
        # персональные рекомендации

        self.pushButton_personal_recommendations_login.clicked.connect(self.open_login)
        Functions.update_recommendations(self, ID)

        self.listWidget_asks.clicked.connect(self.asks)

        #
        # Описание
        #
        self.listWidget_faq.clicked.connect(lambda:self.stackedWidget_faq.setCurrentIndex(self.listWidget_faq.currentRow()))

        # 
        # НАСТРОЙКИ
        # перевести на другой язык
        self.pushButton_settings.clicked.connect(self.translate)

        # перевод интерфейса на язык гостевого пользователя
        Functions.translate(self, 'order')

    #
    # методы Главной страницы
    #

    # открыть вход
    def open_login(self):
        # обновить и перевести согласно данным в БД конкретного аккаунта
        def login_update():
            # перевод интерфейса на язык пользователя
            Functions.translate(self, 'order')
            # обновление разделов согласно новым данным
            Functions.update_calculator(self, ID)
            Functions.update_training(self, ID)
            Functions.update_recommendations(self, ID)
            Functions.update_login(self, ID, LOGIN)

            # импорт языка пользователя из БД
            with sqlite3.connect('db/dataBase2.db') as db:
                cursor = db.cursor()
                self.language = cursor.execute(f""" SELECT language FROM login WHERE ID = {ID}""").fetchall()[0][0]

                cursor.execute(f"""   UPDATE current_id SET id = {ID}""")

            
        
        global LOGIN, ID, log

        # выйти из аккаунта
        if ID != 0:
            ID = 0
            # обновить и перевести согласно данным в БД конкретного аккаунта
            login_update()

        # войти в аккаунт
        else:
            try:
                # создание диалогового окна для входа в систему
                log = LoginWindow(self.language)
                if log.exec():
                    pass
                # получение логина и ID 
                ID, LOGIN = return_data()
                login_update()
                
                

            except Exception:
                pass


    #
    # методы Калькулятора
    #
    # Рассчитать
    def calculate(self):
        # параметры
        global ID
        weight = self.spinBox_weight.value()
        height = self.spinBox_height.value()
        age = self.spinBox_age.value()
        activity = self.comboBox_activity.currentIndex()
        wrist = self.spinBox_wrist.value()
        waist = self.spinBox_waist.value()
        neck = self.spinBox_neck.value()
        hip = self.spinBox_hip.value()

        # Индекс массы тела (ИМТ)

        # рассчитать и вывести ИМТ
        self.lineEdit_IMT_value.setText(
            str(round(weight / (height / 100) ** 2, 1)))
        imt = float(self.lineEdit_IMT_value.text())

        # вывести расшифровку результата
        if self.language == "ru":
            if imt >= 40:
                self.lineEdit_IMT_status.setText("Ожирение 3-ей степени")
            elif imt >= 35:
                self.lineEdit_IMT_status.setText("Ожирение 2-ей степени")
            elif imt >= 30:
                self.lineEdit_IMT_status.setText("Ожирение 1-ей степени")
            elif imt >= 25:
                self.lineEdit_IMT_status.setText("Избыточная масса тела")
            elif imt >= 18.5:
                self.lineEdit_IMT_status.setText("Норма")
            elif imt >= 16:
                self.lineEdit_IMT_status.setText("Недостаточная масса тела")
            else:
                self.lineEdit_IMT_status.setText(
                    "Выраженный дефицит массы тела")
        else:
            if imt >= 40:
                self.lineEdit_IMT_status.setText("Obese Class 3")
            elif imt >= 35:
                self.lineEdit_IMT_status.setText("Obese Class 2")
            elif imt >= 30:
                self.lineEdit_IMT_status.setText("Obese Class 1")
            elif imt >= 25:
                self.lineEdit_IMT_status.setText("Overweight")
            elif imt >= 18.5:
                self.lineEdit_IMT_status.setText("Normal")
            elif imt >= 16:
                self.lineEdit_IMT_status.setText("Mild Thinness")
            else:
                self.lineEdit_IMT_status.setText("Severe Thinness")


        # рассчет КФА (коофицент физической активности)
        if activity == 0:
            kfa = 1.2
        elif activity == 1:
            kfa = 1.375
        elif activity == 2:
            kfa = 1.55
        elif activity == 3:
            kfa = 1.725
        else:
            kfa = 1.9

        # норма калорий Миффлина-Сен Жеора
        if self.male:
            # рассчитать для мужчин по формуле
            self.lineEdit_metabolism.setText(
                str(round((((weight*10) + (height*6.25) - (age*5)) + 5) * kfa)))
        else:
            # рассчитать для женщин по формуле
            self.lineEdit_metabolism.setText(
                str(round((((weight*10) + (height*6.25) - (age*5)) - 161) * kfa)))

        # вывести результат и единицы измерения
        if self.language == "ru":
            self.lineEdit_metabolism.setText(
                self.lineEdit_metabolism.text() + " ккал")
        else:
            self.lineEdit_metabolism.setText(
                self.lineEdit_metabolism.text() + " kcal")

        # максимальная частота сердечных сокращений (ЧСС макс)
        # вывести результат вычислений
        self.lineEdit_hr_max.setText(str(220 - age))

        # тренировочная частота сердечных сокращений (ЧСС тренировочная)
        # вывести результат вычислений
        self.lineEdit_hr_train.setText(
            f"{round((220 - age) * 0.65)} - {round((220 - age) * 0.85)}")

        # рекомендуемый объем выпитой воды в день

        if self.male:
            # рассчитать для мужчин по формуле
            self.lineEdit_water.setText(
                str("%.3f" % ((weight * 34.92 + activity * 251) / 1000)))
        else:
            # рассчитать для женщин по формуле
            self.lineEdit_water.setText(
                str("%.3f" % ((weight * 31.71 + activity * 251) / 1000)))

        # вывести результат и единицы измерений
        if self.language == "ru":
            self.lineEdit_water.setText(self.lineEdit_water.text() + " литров")
        else:
            self.lineEdit_water.setText(
                self.lineEdit_water.text() + " liters'")

        # тип телосложения

        if self.language == "ru":
            if wrist < 18 and self.male or wrist < 15 and not self.male:
    
                self.lineEdit_type.setText("Эктоморф")
                self.body_type = 0
            elif wrist > 20 and self.male or wrist > 17 and not self.male:
                self.lineEdit_type.setText('Эндоморф')
                self.body_type = 2
            else:
                self.lineEdit_type.setText("Мезоморф")
                self.body_type = 1
        else:
            if wrist < 18 and self.male or wrist < 15 and not self.male:
    
                self.lineEdit_type.setText("Ectomorph")
                self.body_type = 0
            elif wrist > 20 and self.male or wrist > 17 and not self.male:
                self.lineEdit_type.setText('Endomorph')
                self.body_type = 2
            else:
                self.lineEdit_type.setText("Mesomorph")
                self.body_type = 1

        # процент жира
        # рассчитивать только если пользователь выбрал эту возможность
        if self.checkBox_fat.checkState():
            if self.male:
                # рассчитать для мужчин по формуле
                self.lineEdit_percent.setText(str(round(
                    495 / (1.0324 - 0.19077 * (log10(waist - neck)) + 0.15456 * (log10(height))) - 450.1, 1)))
            else:
                # рассчитать для женщин по формуле
                self.lineEdit_percent.setText(str(round(
                    495 / (1.29579 - 0.35004 * (log10(waist + hip - neck)) + 0.22100 * (log10(height))) - 450, 1)))

        if ID:
            # запись некоторых данных в БД
            with sqlite3.connect('db/dataBase2.db') as db:

                # создание курсора
                cursor = db.cursor()
                print(float(self.lineEdit_percent.text()))
                cursor.execute(
                    f"""  UPDATE info SET (height, weight, age, gender, activity,
                     wrist, fat_check, waist, neck, hip, IMT, type) = {(height, weight,age,
                      self.male, activity, wrist, self.check, waist, neck, hip, imt, self.body_type)} WHERE ID = {ID}""")
                

    # показать поле для расчета процента жира
    def show_extra(self):
        # нажатие на неактивный чекбокс
        if self.check is False:
            self.check = True
            self.groupBox.show()
            self.groupBox_4.show()
            if self.male == False:
                self.groupBox_2.show()
        # нажатие на активный чекбокс
        else:
            self.check = False
            self.groupBox.hide()
            self.groupBox_4.hide()
            self.groupBox_2.hide()

    # сменить пол
    def gender(self):
        # задать женский пол
        if self.sender().text() == "Женский" or self.sender().text() == "Female":
            self.male = False
            if self.check is True:
                self.groupBox_2.show()

        # задать мужской пол
        else:

            self.male = True
            if self.check is True:
                self.groupBox_2.hide()



    #
    # методы Тренировок
    #

    # завершить тренировку 
    def save_training(self):
        # созранить данные о тренировочном дне в БД
        for day, daily_list in enumerate(self.objects_list_of_quick_start):
            for i, data in enumerate(daily_list):
                # упражнение, вес, повторения
                ex = data[0].isChecked()
                weight = data[1].value()
                rep = data[2].value()

                with sqlite3.connect('db/dataBase2.db') as db:
                # создание курсора
                    cursor = db.cursor()
                    # обновление данных о текущем дне
                    cursor.execute(
                        f"""  UPDATE quick_start SET ({self.exersises[i]}, {self.weights[i]},
                         {self.reps[i]}) = {(ex, weight,rep)} WHERE ID = {ID} AND day = {day}""")
                    
                    # изменить индекс последнего тренировочного дня 
                    cursor.execute(
                        f"""  UPDATE info SET (current_training) = {self.tabWidget.currentIndex()} WHERE ID = {ID}""")



    #
    # методы Питания
    #
    def update_table(self, *language):
        # удалить предыдущую версию таблицы
        # try:
        #   self.page_4.
        
        # except Exception:
        #     pass
        
        # получение данных из csv файла
        if self.language == 'ru':
            fname = 'src/pfcc.csv'
          
        else:
            fname = 'src/pfcc_en.csv'
        with open(fname, encoding="utf-8") as csvfile:
            reader = csv.reader(csvfile, delimiter=';', quotechar='"')
            for index, row in enumerate(reader):
                if row:
                    self.li.append((row[0], row[1].replace(" ", ""), row[2].replace(
                        " ", ""), row[3].replace(" ", ""), row[4].replace(" ", "")))

        # создание модели таблицы
        self.model = QStandardItemModel(len(self.li), 5)
        if self.language == 'ru':
            self.model.setHorizontalHeaderLabels(
                ["Продукт", "Белки", "Жиры", "Углеводы", "ККал"])
        else:
            self.model.setHorizontalHeaderLabels(
                ["Product", "Protein", "Fat", "Carbs", "Calories"])

        # создание словаря {имя продукта : id}
        self.id = {}

        # заполнение таблицы
        row = 0
        for name, proteins, fats, carbs, calories in self.li:
            # заполнение словаря {имя продукта : id}
            self.id[name] = row
            # заполнение модели
            self.model.setItem(row, 0, QStandardItem(name.replace('.', ',')))
            self.model.setItem(row, 1, QStandardItem(
                proteins.replace('.', ',')))
            self.model.setItem(row, 2, QStandardItem(fats.replace('.', ',')))
            self.model.setItem(row, 3, QStandardItem(carbs.replace('.', ',')))
            self.model.setItem(row, 4, QStandardItem(
                calories.replace('.', ',')))
            row += 1

        # создание фильтра
        self.filter_proxy_model = QSortFilterProxyModel()
        self.filter_proxy_model.setSourceModel(self.model)
        self.filter_proxy_model.setFilterCaseSensitivity((Qt.CaseInsensitive))
        self.filter_proxy_model.setFilterKeyColumn(0)

        # создание ввода поискового запроса
        self.search_field.textChanged.connect(
            self.filter_proxy_model.setFilterRegExp)

        # инитилизация табличной оболочки
        self.table.verticalHeader().setSectionResizeMode(QHeaderView.Stretch)

        # добавление фильтра
        self.table.setModel(self.filter_proxy_model)

        # настройка длин столбцов
        self.header = self.table.horizontalHeader()
        self.header.setSectionResizeMode(4, QHeaderView.Stretch)
        self.header.setSectionResizeMode(3, QHeaderView.Stretch)
        self.header.setSectionResizeMode(2, QHeaderView.Stretch)
        self.header.setSectionResizeMode(1, QHeaderView.Stretch)
        self.header.setSectionResizeMode(0, QHeaderView.ResizeToContents)
        
    def user_table(self):

        # удалить предыдущую версию таблицы
        try:
            self.centralWidget.removeWidget(self.table2)
        except Exception:
            pass

        # создание модели таблицы с выбранными продуктами
        if self.choice:
            self.model2 = QStandardItemModel(len(self.choice) + 1, 6)
        else:
            self.model2 = QStandardItemModel(0, 6)

        # установка шапки таблицы
        if self.language == 'ru':
            self.model2.setHorizontalHeaderLabels(
                ["Продукт", 'Граммы', "Белки", "Жиры", "Углеводы", "ККал"])
        else:
            self.model2.setHorizontalHeaderLabels(
                ["Product", 'Grams', "Protein", "Fat", "Carbs", "Calories"])

        # обнуление счетчика строк
        row = 0
        # итоговая строка
        itog = ["Итого", 0, 0, 0, 0, 0]

        # заполнение данных для таблицы
        for name, weight, proteins, fats, carbs, calories in self.choice:
            # получение количества нутриентов в зависимости от массы порции
            proteins1 = cast(
                round(eval(f"{proteins.replace(',', '.')} * {weight} / 100"), 2))
            fats1 = cast(
                round(eval(f"{fats.replace(',', '.')} * {weight} / 100"), 2))
            carbs1 = cast(
                round(eval(f"{carbs.replace(',', '.')} * {weight} / 100"), 2))
            calories1 = cast(
                round(eval(f"{calories.replace(',', '.')} * {weight} / 100"), 2))

            # подсчет суммы каждого нутриента
            itog[1] += int(weight)
            itog[2] += proteins1
            itog[3] += fats1
            itog[4] += carbs1
            itog[5] += calories1

            # заполнение данных
            self.model2.setItem(row, 0, QStandardItem(name))
            self.model2.setItem(row, 1, QStandardItem(weight))
            self.model2.setItem(row, 2, QStandardItem(
                str(proteins1).replace('.', ',')))
            self.model2.setItem(row, 3, QStandardItem(
                str(fats1).replace('.', ',')))
            self.model2.setItem(row, 4, QStandardItem(
                str(carbs1).replace('.', ',')))
            self.model2.setItem(row, 5, QStandardItem(
                str(calories1).replace('.', ',')))
            row += 1

        # заполнение итоговых данных
        if self.language == 'ru':
            total = "Итого:"
        else:
            total = "Total:"
        if self.choice:
            self.model2.setItem(row, 0, QStandardItem(total))
            self.model2.setItem(row, 1, QStandardItem(
                str(itog[1]).replace('.', ',')))
            self.model2.setItem(row, 2, QStandardItem(
                str(round(itog[2], 2)).replace('.', ',')))
            self.model2.setItem(row, 3, QStandardItem(
                str(round(itog[3], 2)).replace('.', ',')))
            self.model2.setItem(row, 4, QStandardItem(
                str(round(itog[4], 2)).replace('.', ',')))
            self.model2.setItem(row, 5, QStandardItem(
                str(round(itog[5], 2)).replace('.', ',')))

        # инитилизация табличной оболочки
        self.table2.verticalHeader().setSectionResizeMode(QHeaderView.Stretch)

        # добавление данных в таблицу
        self.table2.setModel(self.model2)

        # настройка длин столбцов
        self.header2 = self.table2.horizontalHeader()
        self.header2.setSectionResizeMode(5, QHeaderView.Stretch)
        self.header2.setSectionResizeMode(4, QHeaderView.Stretch)
        self.header2.setSectionResizeMode(3, QHeaderView.Stretch)
        self.header2.setSectionResizeMode(2, QHeaderView.Stretch)
        self.header2.setSectionResizeMode(1, QHeaderView.Stretch)
        self.header2.setSectionResizeMode(0, QHeaderView.ResizeToContents)


    # выбор продукта
    def add(self):

        # ошибка пользователя
        def error():
            msg = QMessageBox()
            msg.setIcon(QMessageBox.Critical)
            msg.setStyleSheet('background-color: rgb(35, 35, 35);color:#fff;font-size:20px;')
            if self.language == 'ru':
                msg.setInformativeText('Выберите название продукта!')
                msg.setWindowTitle("Ошибка!")
            else:
                msg.setInformativeText('Choose name of product!')
                msg.setWindowTitle("Error!")
            msg.exec_()

        if not self.table.currentIndex().data():
            error()
        else:
            dialog = Add(self.language, self.table.currentIndex().data())

            if dialog.exec():
                weight = dialog.get()
            try:
                # извлечение полученного кортежа
                name, proteins, fats, carbs, calories = self.li[self.id[self.table.currentIndex(
                ).data()]]
                # добавление нового кортежа в список пользователя
                
                self.choice.append(
                    (name, str(weight), proteins, fats, carbs, calories))

                # обновить таблицу пользователя
                self.user_table()
            except Exception:
                error()

    # очистить список пользователя
    def clear(self):
        self.choice = []
        # обновить таблицу пользователя
        self.user_table()

    # добавление пользовательских продуктов
    def insert(self):
        # инитилизация диалогового окна
        dialog = Insert_Nutrition(self.language)
        try:
            if dialog.exec():
                # получение данных из диалогового окна
                data = dialog.getInputs()

            # добавление в пользовательский csv файл данных из диалогового окна
            with open('user_files/pfcc_user.csv', 'a', encoding='utf-8') as csvfile:
                writer = csv.writer(
                    csvfile, delimiter=';', quotechar='"', quoting=csv.QUOTE_MINIMAL)
                writer.writerow(data)

            # добавление полученных данных в таблицу
            self.model.setItem(len(self.li), 0, QStandardItem(data[0]))
            self.model.setItem(len(self.li), 1, QStandardItem(data[1]))
            self.model.setItem(len(self.li), 2, QStandardItem(data[2]))
            self.model.setItem(len(self.li), 3, QStandardItem(data[3]))
            self.model.setItem(len(self.li), 4, QStandardItem(data[4]))

            # добавление продукта в словарь с id
            self.id[data[0]] = len(self.li)

            # добавление продукта список всех данных
            self.li.append(data)

        except Exception:
            pass

    # сохранить таблицу пользователя
    def save(self):
        # получить имя файла с помощью QFileDialog
        if self.language == 'ru':
            fname = QFileDialog.getSaveFileName(
                self, 'Сохранить базу данных', 'user_files',
                'База данных (*.csv)')[0]
            
        else:
            fname = QFileDialog.getSaveFileName(
                self, 'Save database', 'user_files',
                'Database (*.csv)')[0]

        # записать таблицу пользователя в csv
        try:
            with open(fname, 'w', encoding="utf8") as csvfile:
                writer = csv.writer(
                    csvfile, delimiter=';', quotechar='"', quoting=csv.QUOTE_MINIMAL)
                for row in self.choice:
                    writer.writerow(row)
        except Exception:
            pass

     # загрузить таблицу пользователя
    def load(self, *file_name):
        if file_name[0]:
            fname = file_name[0]
        else:
            # получить имя файла с помощью QFileDialog
            if self.language == 'ru':
                fname = QFileDialog.getOpenFileName(
                    self, 'Открыть базу данных', 'user_files',
                    'База данных (*.csv)')[0]
                
            else:
                fname = QFileDialog.getOpenFileName(
                    self, 'Open database', 'user_files',
                    'Database (*.csv)')[0]
   
        # считать таблицу пользователя из csv
        self.choice = []
        try:
            with open(fname, 'r', encoding="utf-8") as csvfile:
                reader = csv.reader(csvfile, delimiter=';', quotechar='"')

                for index, row in enumerate(reader):
                    if row:
                        self.choice.append(
                            (row[0], row[1], row[2], row[3], row[4], row[5]))

            # обновить таблицу пользователя
            self.user_table()


        except Exception:
            pass

    # Показать конкретную рекомендацию
    def asks(self):
        if self.listWidget_asks.currentRow() == 4:
            names = ["user_files/system_rations/ectomorph_ration.csv","user_files/system_rations/mesomorph_ration.csv", "user_files/system_rations/endomorph_ration.csv"]
            MainWindow.load(self, names[self.body_type])
            self.tabWidget_nutrition.setCurrentIndex(0)

        else:
            self.stackedWidget_advices.setCurrentIndex(self.listWidget_asks.currentRow() * 3 + self.body_type)
        


    #
    # методы Настроек
    #

    def translate(self):
        # перевести страницу с флагом null
        Functions.translate(self, 'null')


if __name__ == "__main__":
    app = QApplication(sys.argv)
    app.setStyle('Fusion')
    window = MainWindow()

    sys.exit(app.exec_())