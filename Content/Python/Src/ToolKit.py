import os
import sys
import unreal
from PySide2 import QtWidgets,QtCore,QtGui

class UToolKit(QtWidgets.QDialog):
    tonemapper = True
    def __init__(self, parent = None):
        super(UToolKit, self).__init__(parent)
        self.setWindowTitle("UToolKit")
        self.setMinimumWidth(200)
        self.create_widgets()
        self.create_layouts()
        self.create_connections()

    def create_widgets(self):
        self.button_changeLanguage = QtWidgets.QPushButton("ChangeLanguage")
        self.button_closeTonemaperFilem = QtWidgets.QPushButton("closeTonemaperFilem")

    def create_layouts(self):
        main_layout = QtWidgets.QVBoxLayout(self)
        main_layout.addWidget(self.button_changeLanguage)
        main_layout.addWidget(self.button_closeTonemaperFilem)

    def create_connections(self):
        self.button_changeLanguage.clicked.connect(self.changeLanguage)
        self.button_closeTonemaperFilem.clicked.connect(self.closeTonemapfile)


    def changeLanguage(self):
        current_language = unreal.InternationalizationLibrary.get_current_language()
        if (current_language == "zh-Hans"):
            unreal.InternationalizationLibrary.set_current_language("English")
            # print("换成英文")
        else:
            unreal.InternationalizationLibrary.set_current_language("zh-Hans")
            # print("换成中文")

    def closeTonemapfile(self):
        if(self.tonemapper == True):
            unreal.TAPyToolBPLibrary.excute_command("r.TonemapperFilm 0")
            self.tonemapper = False
        else:
            unreal.TAPyToolBPLibrary.excute_command("r.TonemapperFilm 1")
            self.tonemapper = True




app = QtWidgets.QApplication.instance()
if app is None:
    app = QtWidgets.QApplication(sys.argv)
QtCore.QResource.registerResource("icons.rcc")

rootpath = os.path.abspath(__file__)
rootpath2 = os.path.dirname(rootpath)
rootpath2 = os.path.dirname(rootpath2)

# print(rootpath2)
with open(rootpath2+"\\Qss\\" +"ue.qss", 'r') as f:
    qss = f.read()
    app.setStyleSheet(qss)


try:
    app.exit()
    u.close()
    u.deleteLater()

except:
    pass

u = UToolKit()
u.show()

# 窗口随着unreal 缩小时  同步
unreal.parent_external_window_to_slate(u.winId())
