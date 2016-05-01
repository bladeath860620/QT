/********************************************************************************
** Form generated from reading UI file 'music1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC1_H
#define UI_MUSIC1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Music1
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *Music1)
    {
        if (Music1->objectName().isEmpty())
            Music1->setObjectName(QStringLiteral("Music1"));
        Music1->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Music1->sizePolicy().hasHeightForWidth());
        Music1->setSizePolicy(sizePolicy);
        Music1->setMinimumSize(QSize(1024, 768));
        Music1->setMaximumSize(QSize(1024, 768));
        Music1->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/music.png);"));
        centralwidget = new QWidget(Music1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Music1->setCentralWidget(centralwidget);

        retranslateUi(Music1);

        QMetaObject::connectSlotsByName(Music1);
    } // setupUi

    void retranslateUi(QMainWindow *Music1)
    {
        Music1->setWindowTitle(QApplication::translate("Music1", "Music_1", 0));
    } // retranslateUi

};

namespace Ui {
    class Music1: public Ui_Music1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC1_H
