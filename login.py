import sys
from design.ui_login import Ui_Dialog
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import QIcon
import sqlite3
# from main import *

# отправить логин и id в main
def return_data():    
    try:
        global LOGIN, ID
        
        return ID, LOGIN
    except Exception:
        print('error')
# главная страница
class LoginWindow(QDialog, Ui_Dialog):
    def __init__(self, language, parent=None):
        super().__init__(parent)
        self.language = language
        global LOGIN, ID
        LOGIN, ID = 0, 0
        self.setupUi(self)
        self.setWindowIcon(QIcon("img/icons/sigh_in_black.ico"))
        if self.language == 'ru':
            self.setWindowTitle("Войти в систему")
        else:
            self.setWindowTitle("Sign in")
        self.pushButton_registration.clicked.connect(self.registration)
        self.pushButton_authorization.clicked.connect(self.authorization)

        # перевод на английский
        if self.language == 'en':
            self.label_login.setText( "Login")
            self.label_password.setText("Password")
            self.label_header.setText("Sign in")
            self.label_status.setText("Enter your username and password")
            self.pushButton_authorization.setText("Sign in")
            self.pushButton_registration.setText("Registration")
    
        self.show()

    def registration(self):
        # подключение к базе данных логинов и паролей
        with sqlite3.connect('db/dataBase2.db') as db:
        
            # создание курсора
            cursor = db.cursor()
            
            # получение значений для ввода в БД
            current_id = max(cursor.execute(""" SELECT id FROM login """).fetchall())[0] + 1
            login = self.lineEdit_login.text()
            password = self.lineEdit_password.text()

            if not login or not password:
                if self.language == 'ru':
                    self.label_status.setText("Введите логин и пароль!")
                else:
                    self.label_status.setText("Enter your username and password!")
                self.label_status.setStyleSheet('color:#ff0000;')

            elif len(password) < 4:
                if self.language == 'ru':
                    self.label_status.setText("Слишком короткий пароль")
                else:
                    self.label_status.setText("The password is too short")
                self.label_status.setStyleSheet('color:#ff0000;')

            # проверка логина на занятость
            elif (login,) not in cursor.execute("""SELECT login FROM login
              """).fetchall():
                # создание кортежа для ввода в БД
                insert = (current_id, login, password, self.language)
               

                # ввод значений в БД
                query = """  INSERT INTO login (id, login, password, language) VALUES(?, ?, ?, ?) """
                cursor.execute(query, insert)
                
                cursor.execute(
                    f"""  INSERT INTO info (id, height, weight, age, gender, activity,
                     wrist, fat_check, waist, neck, hip, IMT, type, fat_percent, current_training) VALUES ({current_id}, {175}, {70}, {25},
                      {True},{3} , {18}, {False}, {75}, {20}, {75}, {22.9}, {1}, {15.3}, {0})""")
                for day in range(21):
                    print(day)
                    cursor.execute(
                    f"""  INSERT INTO quick_start (id, day, ex1_check, ex2_check, ex3_check, ex4_check,
                     ex5_check, weight1, weight2, weight3, weight4, weight5, reps1, reps2, reps3, reps4, reps5)
                      VALUES ({current_id}, {day}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)""")

                # сообщение об успехе
                if self.language == 'ru':
                    self.label_status.setText("Registration was successful!")
                else:
                    self.label_status.setText("")
                self.label_status.setStyleSheet('color:#00ff00;')
                global ID
                ID = current_id
            # логин уже зарегистрирован
            else:
                if self.language == 'ru':
                    self.label_status.setText("This username already exists!")
                else:
                    self.label_status.setText("")
                self.label_status.setStyleSheet('color:#ff0000;')
                print(LOGIN)


    def authorization(self):
        global ID, LOGIN
        # подключение к базе данных логинов и паролей
        with sqlite3.connect('db/dataBase2.db') as db:
        
            # создание курсора
            cursor = db.cursor()
            
            # получение значений из для авторизации
            login = self.lineEdit_login.text()
            password = self.lineEdit_password.text()


            # проверка наличия логина в БД
            if (login,) not in cursor.execute("""SELECT login FROM login
              """).fetchall():
                if self.language == 'ru':
                    self.label_status.setText("Такого логина нет!")
                else:
                    self.label_status.setText("There is no such username!")
                self.label_status.setStyleSheet('color:#ff0000;')

            # проверка корректности пароля
            else:
                if (login,password) not in cursor.execute("""SELECT login, password FROM login
                  """).fetchall():
                    if self.language == 'ru':
                        self.label_status.setText("Неверный пароль!")
                    else:
                        self.label_status.setText("Wrong password!")
                    self.label_status.setStyleSheet('color:#ff0000;')
                else:
                    if self.language == 'ru':
                        self.label_status.setText("Успешный вход!")
                    else:
                        self.label_status.setText("Successful login!")
                    self.label_status.setStyleSheet('color:#00ff00;')
                    # MainWindow.label_name.setText(LOGIN)
                    # global log
                    # QTimer.singleShot(1000,lambda: log.close())

                    # получение ID аккаунта 
                    
                    ID, LOGIN = cursor.execute("""SELECT id, login FROM login WHERE login = ? AND password = ? 
                  """, (login,password,)).fetchall()[0]


# запуск приложения
if __name__ == "__main__":
    app = QApplication(sys.argv)  
    app.setStyle('Fusion')  
    global log
    log = LoginWindow("en")
    log.show()
    sys.exit(app.exec_())
