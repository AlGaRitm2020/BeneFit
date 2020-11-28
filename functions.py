################################################################################
##
## BY: WANDERSON M.PIMENTA
## PROJECT MADE WITH: Qt Designer and PySide2
## V: 1.0.0
##
################################################################################

## ==> GUI FILE
from main import *

class Functions(MainWindow):

    def toggleMenu(self, maxWidth, enable):
        if enable:

            # GET WIDTH
            width = self.frame_left_menu.width()
            maxExtend = maxWidth
            standard = 70

            # SET MAX WIDTH
            if width == 70:
                widthExtended = maxExtend
                self.btn_page_1.setText("Main")
            else:
                widthExtended = standard
                self.btn_page_1.setText("")



            # ANIMATION
            self.animation = QPropertyAnimation(self.frame_left_menu, b"minimumWidth")
            self.animation.setDuration(400)
            self.animation.setStartValue(width)
            self.animation.setEndValue(widthExtended)
            self.animation.setEasingCurve(QtCore.QEasingCurve.InOutQuart)
            self.animation.start()

    def forward(self):
        self.Btn_Toggle.clicked.connect(lambda: Functions.toggleMenu(self, 250, True))
        # PAGE 1
        self.btn_page_1.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_1))
        # PAGE2
        self.btn_page_2.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_2))
        # PAGE3
        self.btn_page_3.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_3))

        self.btn_page_4.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_4))

        self.btn_page_5.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_5))

        self.btn_page_6.clicked.connect(lambda: self.stackedWidget.setCurrentWidget(self.page_6))
