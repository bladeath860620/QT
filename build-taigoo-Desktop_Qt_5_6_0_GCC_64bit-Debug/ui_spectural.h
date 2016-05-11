/********************************************************************************
** Form generated from reading UI file 'spectural.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTURAL_H
#define UI_SPECTURAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spectural
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Spectural)
    {
        if (Spectural->objectName().isEmpty())
            Spectural->setObjectName(QStringLiteral("Spectural"));
        Spectural->resize(800, 600);
        menubar = new QMenuBar(Spectural);
        menubar->setObjectName(QStringLiteral("menubar"));
        Spectural->setMenuBar(menubar);
        centralwidget = new QWidget(Spectural);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Spectural->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Spectural);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Spectural->setStatusBar(statusbar);

        retranslateUi(Spectural);

        QMetaObject::connectSlotsByName(Spectural);
    } // setupUi

    void retranslateUi(QMainWindow *Spectural)
    {
        Spectural->setWindowTitle(QApplication::translate("Spectural", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Spectural: public Ui_Spectural {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTURAL_H
