/********************************************************************************
** Form generated from reading UI file 'requirement.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUIREMENT_H
#define UI_REQUIREMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Requirement
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QLCDNumber *lcdNumber;

    void setupUi(QMainWindow *Requirement)
    {
        if (Requirement->objectName().isEmpty())
            Requirement->setObjectName(QStringLiteral("Requirement"));
        Requirement->resize(1024, 571);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Requirement->sizePolicy().hasHeightForWidth());
        Requirement->setSizePolicy(sizePolicy);
        Requirement->setMinimumSize(QSize(1024, 571));
        Requirement->setMaximumSize(QSize(1024, 571));
        Requirement->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/music.png);"));
        centralwidget = new QWidget(Requirement);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 290, 1024, 284));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 150, 110, 110));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/music/image/music/hitbox.png);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1027, 291));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(830, 120, 191, 31));
        lcdNumber->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/yellow.png);"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("intValue", QVariant(30));
        Requirement->setCentralWidget(centralwidget);
        label->raise();
        label_2->raise();
        lcdNumber->raise();
        graphicsView->raise();

        retranslateUi(Requirement);

        QMetaObject::connectSlotsByName(Requirement);
    } // setupUi

    void retranslateUi(QMainWindow *Requirement)
    {
        Requirement->setWindowTitle(QApplication::translate("Requirement", "Requirement", 0));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Requirement: public Ui_Requirement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUIREMENT_H
