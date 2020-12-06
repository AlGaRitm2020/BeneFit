import sys
from design.ui_login import Ui_Dialog
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import QIcon
import sqlite3
# from main import *

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
        global LOGIN, ID
        LOGIN, ID = 0, 0
        self.setupUi(self)
        self.setWindowIcon(QIcon("img/icons/4213426-about-description-help-info-information-notification_115427.ico"))
        self.setWindowTitle("Войти в систему")
        self.pushButton_registration.clicked.connect(self.registration)
        self.pushButton_authorization.clicked.connect(self.authorization)

        self.show()

    def registration(self):
        # подключение к базе данных логинов и паролей
        with sqlite3.connect('db/dataBase2.db') as db:
        
            # создание курсора
            cursor = db.cursor()
            
            # получение значений для ввода в БД
            curent_id = max(cursor.execute(""" SELECT id FROM login """).fetchall())[0] + 1
            login = self.lineEdit_login.text()
            password = self.lineEdit_password.text()

            if not login or not password:
                self.label_status.setText("Введите логин и пароль!")
                self.label_status.setStyleSheet('color:#ff0000;')

            elif len(password) < 4:
                self.label_status.setText("Слишком короткий пароль")
                self.label_status.setStyleSheet('color:#ff0000;')

            # проверка логина на занятость
            elif (login,) not in cursor.execute("""SELECT login FROM login
              """).fetchall():
                # создание кортежа для ввода в БД
                insert = (curent_id, login, password)
                print(insert)

                # ввод значений в БД
                query = """  INSERT INTO login (id, login, password) VALUES(?, ?, ?) """
                cursor.execute(query, insert)

                # сообщение об успехе
                self.label_status.setText("Регистрация прошла успешно!")
                self.label_status.setStyleSheet('color:#00ff00;')
                global ID
                ID = curent_id
            # логин уже зарегистрирован
            else:
                
                self.label_status.setText("Такой логин уже существует!")
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

                self.label_status.setText("Такого логина нет!")
                self.label_status.setStyleSheet('color:#ff0000;')

            # проверка корректности пароля
            else:
                if (login,password) not in cursor.execute("""SELECT login, password FROM login
                  """).fetchall():
                    self.label_status.setText("Неверный пароль!")
                    self.label_status.setStyleSheet('color:#ff0000;')
                else:
                    self.label_status.setText("Успешный вход!")
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
