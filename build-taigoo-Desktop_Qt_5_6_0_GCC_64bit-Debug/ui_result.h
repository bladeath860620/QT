/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QDialogButtonBox *buttonBox;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLabel *label;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QStringLiteral("Result"));
        Result->resize(676, 507);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Result->sizePolicy().hasHeightForWidth());
        Result->setSizePolicy(sizePolicy);
        Result->setMinimumSize(QSize(676, 507));
        Result->setMaximumSize(QSize(676, 507));
        Result->setStyleSheet(QStringLiteral("Result{background-image: url(:/bg/image/bg/result.jpg);};"));
        buttonBox = new QDialogButtonBox(Result);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(300, 0, 371, 51));
        buttonBox->setStyleSheet(QStringLiteral("background-image: url(:/bg/image/bg/yellow.png);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Retry);
        buttonBox->setCenterButtons(false);
        lcdNumber = new QLCDNumber(Result);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(140, 15, 91, 41));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2 = new QLCDNumber(Result);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(140, 80, 91, 41));
        lcdNumber_2->setFrameShape(QFrame::NoFrame);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3 = new QLCDNumber(Result);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(140, 140, 91, 41));
        lcdNumber_3->setFrameShape(QFrame::NoFrame);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4 = new QLCDNumber(Result);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(470, 390, 171, 81));
        lcdNumber_4->setFrameShape(QFrame::Box);
        lcdNumber_4->setLineWidth(5);
        label = new QLabel(Result);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 330, 171, 61));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(5);

        retranslateUi(Result);
        QObject::connect(buttonBox, SIGNAL(accepted()), Result, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Result, SLOT(reject()));

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QApplication::translate("Result", "Dialog", 0));
        label->setText(QApplication::translate("Result", "      SCORE", 0));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
