import sys
from PyQt5 import QtWidgets, QtCore
from PyQt5.QtWidgets import QApplication, QMainWindow, QLabel, QPushButton, QGridLayout, QHBoxLayout, QGroupBox

class MyWindow(QMainWindow):
    def __init__(self):
        super(MyWindow, self).__init__()
        self.setGeometry(100,100,720,540)
        self.setWindowTitle("Keil Debug Script Generator")
        self.buildUI()

    def buildUI(self):

        #Define/Add a Center Child with a layout
        #Each "area" of the app needs a QGroup to add Widgets to
        masterGroup = QGroupBox("Master Group")
        rightGroup = QGroupBox("Right Group")
        leftGroup = QGroupBox("Left Group")

        #Each QGroup *should* have a layout for its children -- unless it only has one
        windowDivider = QHBoxLayout() #Divide masterGroup into left and right halves
        widgetGrid  = QGridLayout()   #Break the right half into a grid

        #Divide Window in Half
        windowDivider.addWidget(leftGroup)
        windowDivider.addWidget(rightGroup)

        #Add items to the grid
        #Here I ussed the buttons from the example code I looked at
        widgetGrid.addWidget(QPushButton('1'),0,0)
        widgetGrid.addWidget(QPushButton('2'),0,1)
        widgetGrid.addWidget(QPushButton('3'),0,2)
        widgetGrid.addWidget(QPushButton('4'),1,0)
        widgetGrid.addWidget(QPushButton('5'),1,1)
        widgetGrid.addWidget(QPushButton('6'),1,2)
        widgetGrid.addWidget(QPushButton('7'),2,0)
        widgetGrid.addWidget(QPushButton('8'),2,1)
        widgetGrid.addWidget(QPushButton('9'),2,2)

        #Set the layouts to the groups, and the master group to the window
        rightGroup.setLayout(widgetGrid)
        masterGroup.setLayout(windowDivider)
        self.setCentralWidget(masterGroup)

def window():
    app = QApplication(sys.argv)
    top = MyWindow()
    top.show()
    sys.exit(app.exec_())

window()
