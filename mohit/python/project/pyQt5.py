import PyQt5.QtWidgets as qtw
import PyQt5.QtGui as qtg

class MainWindow(qtw.QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("hello")
        self.setLayout(qtw.QVBoxLayout())
        my_label=qtw.QLabel()
        my_label.setFont(qtg.QFont('Helvetica',18))
        self.layout().addWidget(my_label)

        self.my_entery=qtw.QLineEdit()
        self.my_entery.setObjectName("name")
        self.layout().addWidget(self.my_entery)
        self.my_entery.setText("")

        my_button=qtw.QPushButton("press",clicked=lambda:press_it())
        self.layout().addWidget(my_button)

        def press_it():
            my_label.setText(f'hello{self.my_entery.text()}')
            self.my_entery.setText("")


        self.show()

app=qtw.QApplication([])
mw= MainWindow()
app.exec_()
