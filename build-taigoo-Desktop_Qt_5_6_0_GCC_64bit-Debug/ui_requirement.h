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
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

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
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(830, 120, 191, 31));
        lcdNumber->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/yellow.png);"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("intValue", QVariant(30));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(950, 120, 71, 31));
        lcdNumber_2->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/yellow.png);"));
        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(0, 190, 141, 91));
        lcdNumber_3->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/yellow.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(830, 120, 121, 31));
        label_3->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/yellow.png);"));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(262, 150, 111, 111));
        label_4->setStyleSheet(QStringLiteral("background-image: url(:/music/image/music/hitbox.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 152, 141, 41));
        label_5->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/yellow.png);"));
        label_5->setFrameShape(QFrame::Box);
        label_5->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 165, 101, 61));
        label_6->setStyleSheet(QStringLiteral("background-image: url(:/music/image/music/good.png);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 170, 103, 61));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/music/image/music/normal.png);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 170, 103, 51));
        label_8->setStyleSheet(QStringLiteral("background-image: url(:/music/image/music/bad.png);"));
        Requirement->setCentralWidget(centralwidget);
        label->raise();
        label_2->raise();
        lcdNumber->raise();
        graphicsView->raise();
        lcdNumber_2->raise();
        lcdNumber_3->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();

        retranslateUi(Requirement);

        QMetaObject::connectSlotsByName(Requirement);
    } // setupUi

    void retranslateUi(QMainWindow *Requirement)
    {
        Requirement->setWindowTitle(QApplication::translate("Requirement", "Requirement", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Requirement", "TIME LEFT:", 0));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Requirement", "     SCORE", 0));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Requirement: public Ui_Requirement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUIREMENT_H
