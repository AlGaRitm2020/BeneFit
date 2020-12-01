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
import sqlite3
from math import log10
class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        # покключить интерфейс
        self.setupUi(self)
        # создать перемунные пользователя
        global ID, LOGIN
        ID = 1
        LOGIN = "Guest"

        # скрыть дополнительные поля    
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

        # установить иконку окна
        self.setWindowIcon(QIcon("img/icons/webpagehome_85808.ico"))

        # показать имя пользователя
        self.label_name.setText(LOGIN)
        

        # создать переменную с языком
        self.language = "ru"
        # обнулить чекбокс
        self.check = False

        # скрыть дополнительные поля
        self.groupBox.hide()
        self.groupBox_2.hide()
        self.groupBox_4.hide()

        # события
        
        self.pushButton.clicked.connect(self.calculate)
        # смена пола
        self.male = self.radioButton_male.isChecked()
        # показать доп поля
        self.checkBox_fat.clicked.connect(self.show_extra)
        # перейти в функцию сменить пол
        self.radioButton_male.clicked.connect(self.gender)
        self.radioButton_female.clicked.connect(self.gender)

        Functions.update_calculator(self, ID)

        self.show()

        
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
        k = float(self.lineEdit_IMT_value.text())

        # вывести расшифровку результата
        if self.language == "ru":
            if k >= 40:
                self.lineEdit_IMT_status.setText("Ожирение 3-ей степени")
            elif k >= 35:
                self.lineEdit_IMT_status.setText("Ожирение 2-ей степени")
            elif k >= 30:
                self.lineEdit_IMT_status.setText("Ожирение 1-ей степени")
            elif k >= 25:
                self.lineEdit_IMT_status.setText("Избыточная масса тела")
            elif k >= 18.5:
                self.lineEdit_IMT_status.setText("Норма")
            elif k >= 16:
                self.lineEdit_IMT_status.setText("Недостаточная масса тела")
            else:
                self.lineEdit_IMT_status.setText(
                    "Выраженный дефицит массы тела")
        else:
            if k >= 40:
                self.lineEdit_IMT_status.setText("Obese Class 3")
            elif k >= 35:
                self.lineEdit_IMT_status.setText("Obese Class 2")
            elif k >= 30:
                self.lineEdit_IMT_status.setText("Obese Class 1")
            elif k >= 25:
                self.lineEdit_IMT_status.setText("Overweight")
            elif k >= 18.5:
                self.lineEdit_IMT_status.setText("Normal")
            elif k >= 16:
                self.lineEdit_IMT_status.setText("Mild Thinness")
            else:
                self.lineEdit_IMT_status.setText("Severe Thinness")

        # базовый метаболизм

        if self.male:
            # рассчитать для мужчин по формуле
            self.lineEdit_metabolism.setText(
                str(round(10 * weight + 6.25 * height - 5 * age + 5)))
        else:
            # рассчитать для женщин по формуле
            self.lineEdit_metabolism.setText(
                str(round(10 * weight + 6.25 * height - 5 * age - 161)))
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

        # рассчитать для мужчин по формуле
        if wrist < 18 and self.male or wrist < 15 and not self.male:
            self.lineEdit_type.setText("Эктоморф")
        elif wrist > 20 and self.male or wrist > 17 and not self.male:
            self.lineEdit_type.setText('Эндоморф')
        else:
            self.lineEdit_type.setText("Мезоморф")

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
                cursor.execute(
                    f"""  UPDATE info SET (height, weight, age, gender, activity,
                     wrist, fat_check, waist, neck, hip ) = {(height, weight,age,
                      self.male, activity, wrist, self.check, waist, neck, hip)} WHERE ID = {ID}""")

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



    # открыть вход
    def open_login(self):
        global log
        log = LoginWindow('ru')




        ## ==> END ##

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    sys.exit(app.exec_())
