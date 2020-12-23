from PyQt5.QtWidgets import *
from PyQt5.QtGui import *

# добавить продукт в пользовательскую таблицу
class Add(QDialog):
    def __init__(self,language,name, parent=None):
        super().__init__(parent)
        # установить иконку окна
        self.setWindowIcon(QIcon("img/icons/1491254405-plusaddmoredetail_82972.ico"))

        # установить название
        if language == 'ru':
            self.setWindowTitle('Добавить')
        else:
            self.setWindowTitle('Add')

        # добавить стили
        self.setStyleSheet("background-color: rgb(35, 35, 35);;color:#fff")

        # формы для заполнения
        self.grams = QSpinBox(self)
        self.grams.setMaximum(5000)
        
        buttonBox = QDialogButtonBox(QDialogButtonBox.Ok | QDialogButtonBox.Cancel, self);

        # заполение форм лайаута
        layout = QFormLayout(self)
        if language == "ru":
            layout.addRow(f"{name}, грамм", self.grams)
        else:
            layout.addRow(f"{name}, gramms", self.grams)
        layout.addWidget(buttonBox)

        # выполнить или отклонить
        buttonBox.accepted.connect(self.accept)
        buttonBox.rejected.connect(self.reject)

    # получить значения
    def get(self):
        return self.grams.value()