/********************************************************************************
** Form generated from reading UI file 'coco.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COCO_H
#define UI_COCO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>

QT_BEGIN_NAMESPACE

class Ui_Coco
{
public:
    QDialogButtonBox *buttonBox;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *Coco)
    {
        if (Coco->objectName().isEmpty())
            Coco->setObjectName(QStringLiteral("Coco"));
        Coco->resize(400, 300);
        buttonBox = new QDialogButtonBox(Coco);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Retry);
        lcdNumber = new QLCDNumber(Coco);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(150, 90, 191, 101));

        retranslateUi(Coco);
        QObject::connect(buttonBox, SIGNAL(accepted()), Coco, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Coco, SLOT(reject()));

        QMetaObject::connectSlotsByName(Coco);
    } // setupUi

    void retranslateUi(QDialog *Coco)
    {
        Coco->setWindowTitle(QApplication::translate("Coco", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Coco: public Ui_Coco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COCO_H
