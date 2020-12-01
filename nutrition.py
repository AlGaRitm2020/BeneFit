import sys
import csv
from PyQt5.QtWidgets import QApplication, QMainWindow, QWidget, QLineEdit, QTableView, QHeaderView, QVBoxLayout, QPushButton, QInputDialog, QMessageBox, QFileDialog
from PyQt5.QtCore import Qt, QSortFilterProxyModel
from PyQt5.QtGui import QStandardItemModel, QStandardItem, QIcon
from design.ui_nutrition import Ui_NutritionWindow
from add_data import cast
from add_data import AddData

class NutritionWindow(QMainWindow, Ui_NutritionWindow):

    # инитилизация таблицы с выбранными пользователем продуктами
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

    def __init__(self, language):
        self.language = language
        super().__init__()
        self.setupUi(self)
        # установить фисированый размер
        self.setFixedSize(927, 754)

        self.setWindowIcon(QIcon("img/icons/foodmealplaterestaurant_109684.ico"))

        # установить выбранный язык
        if self.language == "en":
            self.setWindowTitle("Nutrition")
            self.pushButton.setText("Add")
            self.pushButton_2.setText("Clear")
            self.pushButton_4.setText("Save as")
            self.pushButton_5.setText("Load")
            self.pushButton_6.setText("Nutrition")
            self.pushButton_7.setText("Main")
        else:
            self.setWindowTitle("Питание")

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

        # кнопки

        # вернутся на главную
        self.pushButton_7.clicked.connect(self.back)

        # "добавить"
        self.pushButton.clicked.connect(self.add)

        # "очистить"
        self.pushButton_2.clicked.connect(self.clear)

        # "Добавить данные"
        self.pushButton_3.clicked.connect(self.addData)

        # "сохранить"
        self.pushButton_4.clicked.connect(self.save)

        # "загрузить"
        self.pushButton_5.clicked.connect(self.load)

        # создать пользовательскую таблицу
        self.user_table()

    # вернуться на главную
    def back(self):
        global main
        main.show()
        global nut
        nut.close()
        

    # выбор продукта
    def add(self):

        # ошибка пользователя
        def error():
            msg = QMessageBox()
            msg.setIcon(QMessageBox.Critical)
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

            # получение данных из диалогового окна
            if self.language == 'ru':
                weight, okPressed = QInputDialog.getInt(
                    self, "Добавить ", f"{self.table.currentIndex().data()}, грамм:", 100, 1, 3000, 1)

            else:
                weight, okPressed = QInputDialog.getInt(
                    self, "Add ", f"{self.table.currentIndex().data()}, g:", 100, 1, 3000, 1)

            try:
                # извлечение полученного кортежа
                name, proteins, fats, carbs, calories = self.li[self.id[self.table.currentIndex(
                ).data()]]
                # добавление нового кортежа в список пользователя
                if okPressed:
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
    def addData(self):
        # инитилизация диалогового окна
        dialog = AddData(self.language)
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

    def load(self):
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


# запуск приложения
if __name__ == "__main__":
    app = QApplication(sys.argv)
    # установить стиль окна
    app.setStyle('Fusion')
    nutrition = NutritionWindow("en")
    nutrition.show()
    sys.exit(app.exec_())
