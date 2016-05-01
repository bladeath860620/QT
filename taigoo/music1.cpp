#include "music1.h"
#include "ui_music1.h"
#include <QDebug>
Music1::Music1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Music1)
{
    ui->setupUi(this);
}

Music1::~Music1()
{
    delete ui;
}

void Music1::keyPressEvent(QKeyEvent *k)
{
    qDebug() << k->key();
    if(k->key()==Qt::Key_F)
    {
        qDebug() << "Red drum comfirmed";

    }
    if(k->key()==Qt::Key_J)
    {
        qDebug() << "Blue drum comfirmed";

    }
}
