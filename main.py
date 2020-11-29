################################################################################
##
## BY: WANDERSON M.PIMENTA
## PROJECT MADE WITH: Qt Designer and PyQt5
## V: 1.0.0
##
################################################################################

import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from login import LoginWindow

# GUI FILEL
from ui_main import Ui_MainWindow

# IMPORT FUNCTIONS
from functions import *

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
     
        self.setupUi(self)
        self.btn_login.hide()
    
        
        # функции переходов из меню 
        Functions.forward(self)

        # переходы из главной страницы
        self.pushButton_sign.clicked.connect(self.open_login)
        self.pushButton_calculator.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_2))
        self.pushButton_training.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_3))
        self.pushButton_nutrition.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_4))
        self.pushButton_info.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_5))

        # показать окно
        self.show()

                # заходим в приложение 
        global ID, LOGIN
        ID = 0
        LOGIN = "Guest"
        # создать переменную с языком


        # установить фисированый размер окна
        # self.setFixedSize(641, 534)


        # установить иконку окна
        self.setWindowIcon(QIcon("img/icons/webpagehome_85808.ico"))

        # показать имя пользователя
        self.label_name.setText(LOGIN)
        

        

        # self.pushButton_training.clicked.connect(self.open_training)
        # self.pushButton_nutrition.clicked.connect(self.open_nutrition)
        # self.pushButton_info.clicked.connect(self.open_description)
        # # выбор языка интерфейса
        # self.pushButton_ru.clicked.connect(self.translate)
        # self.pushButton_en.clicked.connect(self.translate)

    # открыть вход
    def open_login(self):
        global log
        log = LoginWindow('ru')



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
        ## ==> END ##

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    sys.exit(app.exec_())
