from PyQt5.QtWidgets import *
from PyQt5.QtGui import *

# функция отбрасывания дробной части
def cast(n):
    if n == int(n):
        return int(n)
    return n

class Insert_Nutrition(QDialog):
    def __init__(self,language, parent=None):
        super().__init__(parent)

        self.setWindowIcon(QIcon("img/icons/1491254405-plusaddmoredetail_82972.ico"))

        if language == 'ru':
            self.setWindowTitle('Добавить данные в БД')
        else:
            self.setWindowTitle('Add data to the database')
        # self.resize(500, 626)
        self.setStyleSheet("background-color: rgb(35, 35, 35);;color:#fff")
        self.name = QLineEdit(self)
        self.proteins = QDoubleSpinBox(self)
        self.fats = QDoubleSpinBox(self)
        self.carbs = QDoubleSpinBox(self)
        self.calories = QDoubleSpinBox(self)
        self.calories.setMaximum(900)
        
        buttonBox = QDialogButtonBox(QDialogButtonBox.Ok | QDialogButtonBox.Cancel, self);

        layout = QFormLayout(self)
        # layout.addRow("Добавить данные","d")
        if language == "ru":
            layout.addRow("Название продукта", self.name)
            layout.addRow("Белки на 100 гр продукта", self.proteins)
            layout.addRow("Жиры на 100 гр продукта", self.fats)
            layout.addRow("Углеводы на 100 гр продукта", self.carbs)
            layout.addRow("Ккал на 100 гр продукта", self.calories)
        else:
            layout.addRow("Name of product", self.name)
            layout.addRow("Protein per 100 g of product", self.proteins)
            layout.addRow("Fat per 100 g of product", self.fats)
            layout.addRow("Carbs per 100 g of product", self.carbs)
            layout.addRow("Calories per 100 g of product", self.calories)
        layout.addWidget(buttonBox)

        buttonBox.accepted.connect(self.accept)
        buttonBox.rejected.connect(self.reject)

    def getInputs(self):
        return (self.name.text(), str(cast(self.proteins.value())).replace('.',','),
         str(cast(self.fats.value())).replace('.',','), str(cast(self.carbs.value())).replace('.',','),
          str(cast(self.calories.value())).replace('.',','))

class Add(QDialog):
    def __init__(self,language,name, parent=None):
        super().__init__(parent)

        self.setWindowIcon(QIcon("img/icons/1491254405-plusaddmoredetail_82972.ico"))

        if language == 'ru':
            self.setWindowTitle('Добавить')
        else:
            self.setWindowTitle('Add')
        # self.resize(500, 626)
        self.setStyleSheet("background-color: rgb(35, 35, 35);;color:#fff")
        self.grams = QSpinBox(self)
        self.grams.setMaximum(5000)
        
        buttonBox = QDialogButtonBox(QDialogButtonBox.Ok | QDialogButtonBox.Cancel, self);

        layout = QFormLayout(self)
        # layout.addRow("Добавить данные","d")
        if language == "ru":
            layout.addRow(f"{name}, грамм", self.grams)
        else:
            layout.addRow(f"{name}, gramms", self.grams)
        layout.addWidget(buttonBox)

        buttonBox.accepted.connect(self.accept)
        buttonBox.rejected.connect(self.reject)

    def get(self):
        return self.grams.value()

if __name__ == "__main__":
    import sys
    app = QApplication(sys.argv)
    # установить стиль окна
    
    nutrition = Add("en","gov")
    nutrition.show()
    sys.exit(app.exec_())