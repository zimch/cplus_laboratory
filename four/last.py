import sys
import random
from math import log
import math
import sys
from PyQt5.QtWidgets import *
sys.setrecursionlimit(1000)   # Эта магия делает нерабочий код рабочим

class ProblemGenerator:
    def extract_nums(self, exp):
        symbols = list(exp)
        NUM = "1234567890."
        for i in range(len(symbols)):
            symbols[i] = "N" if symbols[i] in NUM else "T"
        begins = []
        ends = []
        for i in range(len(symbols) - 1):
            fn = symbols[i] + symbols[i + 1]
            if fn == "TN":
                begins.append(i)
            elif fn == "NT":
                ends.append(i)
        if exp[-1] in NUM:
            ends.append(len(exp) - 1)
        if exp[0] in NUM:
            begins = [-1] + begins
        return [(x + 1, y + 1) for x, y in zip(begins, ends)]
    
    def __init__(self):
        self.funcs = []
    
    def add_expander(self, func):
        self.funcs.append(func)
    
    def complexify(self, num):
        return random.choice(self.funcs)(num)
    
    def __rxp__(self, exp):
        x, y = random.choice(self.extract_nums(exp))
        exp = exp[:x] + "(" + self.complexify(float(exp[x:y])) + ")" + exp[y:]
        return exp
    
    def randexpr(self, ans, steps):
        e = str(ans)
        for i in range(steps):
            e = self.__rxp__(e)
        return e
    

def unmin(*args, acc=2):
    r = []
    for arg in args:
        f = round(arg, acc)
        if f > 0:
            f = str(f)
        else:
            f = "(" + str(f) + ")"
        r.append(f)
    return r

def c_sum(num):
    a = round(random.random() * 100, 3)
    b = num - a
    a, b = unmin(a, b)
    return a + " + " + b

def c_mul(num):
    a = num / (random.random() * 100 + 10)
    if a == 0.0:
        b = random.random()
    else:
        b = num / a
    a, b = unmin(a, b)
    return a + " * " + b

class MainWindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setupUi()
        
    def setupUi(self):
        self.setWindowTitle("Counter")
        self.move(300, 300)
        self.resize(620, 480)
        
        self.textbox1 = QLineEdit(self)
        self.textbox1.move(40, 170)
        self.textbox1.resize(80, 24)
        
        self.textbox2 = QLineEdit(self)
        self.textbox2.move(40, 210)
        self.textbox2.resize(80, 24)
        
        self.label1 = QLabel(self)
        self.label1.setText('=')
        self.label1.move(120, 170)
        self.label1.resize(16, 16)
        
        self.label2 = QLabel(self)
        self.label2.setText('')
        self.label2.move(140, 170)
        self.label2.resize(400, 16)
                
        self.butt1 = QPushButton("Count", self)
        self.butt1.clicked.connect(self.butt1_clicked)
        self.butt1.move(30, 300)

    def butt1_clicked(self):
        gen = ProblemGenerator()
        gen.add_expander(c_sum)
        # print(self.textbox.text())
        exp = gen.randexpr(int(self.textbox1.text()), int(self.textbox2.text()))
        self.label2.setText(exp)
        
        
if __name__ == '__main__':
    app = QApplication(sys.argv)
    win = MainWindow()
    win.show()
    sys.exit(app.exec_())
    


