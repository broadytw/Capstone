import sys
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow, QLabel, QPushButton, QGridLayout, QGroupBox

class MyWindow(QMainWindow):
    def __init__(self):
        super(MyWindow, self).__init__()
        self.setGeometry(100,100,720,540)
        self.setWindowTitle("Keil Debug Script Generator")
        self.buildUI()

    def buildUI(self):

        #Define/Add a Center Child with a layout
        widgetGroup = QGroupBox("Main Window")
        widgetGrid  = QGridLayout();
        widgetGroup.setLayout(widgetGrid)

        #Add items to the grid
        widgetGrid.addWidget(QPushButton('1'),0,0)
        widgetGrid.addWidget(QPushButton('2'),0,1)
        widgetGrid.addWidget(QPushButton('3'),0,2)
        widgetGrid.addWidget(QPushButton('4'),1,0)
        widgetGrid.addWidget(QPushButton('5'),1,1)
        widgetGrid.addWidget(QPushButton('6'),1,2)
        widgetGrid.addWidget(QPushButton('7'),2,0)
        widgetGrid.addWidget(QPushButton('8'),2,1)
        widgetGrid.addWidget(QPushButton('9'),2,2)

        self.setCentralWidget(widgetGroup)

def window():
    app = QApplication(sys.argv)
    top = MyWindow()
    top.show()
    sys.exit(app.exec_())

window()
