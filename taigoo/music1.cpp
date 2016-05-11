#include "music1.h"
#include "ui_music1.h"
#include "menu.h"
#include <QDebug>
Music1::Music1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Music1),
    //menu(new menu),
    gif(new QMovie)
{
    ui->setupUi(this);
    gif->setFileName(":/gif/image/gif/miku.gif");
    ui->label->setMovie(gif);
    gif->setSpeed(250);
    gif->start();
}

Music1::~Music1()
{
    delete ui;
}

void Music1::keyPressEvent(QKeyEvent *k)
{
    /*if(k->key()==Qt::Key_Backspace)
    {
        this->hide();
        Menu->setGeometry(this->x(), this->y(), 1024, 768);
        Menu->show();
    }*/
    if(k->key()==Qt::Key_F)
    {
        qDebug() << "Red drum comfirmed";

    }
    if(k->key()==Qt::Key_J)
    {
        qDebug() << "Blue drum comfirmed";

    }
}
