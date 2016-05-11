#include "requirement.h"
#include "ui_requirement.h"
#include <QDebug>
Requirement::Requirement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Requirement),
    gif(new QMovie),
    t(new QTimer),
    score(0),
    timer(0)
{
    ui->setupUi(this);
    gif->setFileName(":/gif/image/gif/miku.gif");
    ui->label->setMovie(gif);
    gif->setSpeed(250);
    gif->start();
    connect(t, SIGNAL(timeout()), this, SLOT(timing()));
    srand(time(NULL));
    qDebug() << "???";
    gs = new QGraphicsScene(0,0,1024,291);
    //ui->graphicsView(ui->widget);
    ui->graphicsView->setScene(gs);
}

Requirement::~Requirement()
{
    delete ui;
    delete gif;
    delete t;
    delete gs;
}

void Requirement::keyPressEvent(QKeyEvent *k)
{
    qDebug() << k->key();
    /*if(k->key()==Qt::Key_Backspace)
    {
        this->close();
        this->show();
    }*/
    if(k->key()==Qt::Key_G || k->key()==Qt::Key_H)
    {
        qDebug() << "Red hit detected";
    }
    if(k->key()==Qt::Key_F || k->key()==Qt::Key_J)
    {
        qDebug() << "Blue hit detected";
    }
}

void Requirement::setSpectral()
{
    int i;
    for(i=0; i < 30; ++i)
    {
        d = new drum(rand()%4, i*100);
        spectral.push_back(d);
    }
    it = spectral.begin();
    determine = spectral.begin();
}

void Requirement::count_score()
{

}

void Requirement::starter()
{
    spectral.clear();
    setSpectral();
    ui->graphicsView->show();
    t->start(tempo);
}

void Requirement::timing()
{
    timer += tempo;
    if(timer <= 30000)
    {
        ui->lcdNumber->display(30-(timer/1000));
        if(it != spectral.end())
        {
            if(timer >= (*it)->getStartTime())
            {
                gs->addItem(*it);
                connect(t, SIGNAL(timeout()), *it, SLOT(move()));
                connect((*it), SIGNAL(destroy_drum()), this, SLOT(deleted()));
                ++it;
            }
        }
    }
    //else
}

void Requirement::deleted()
{
    if(determine != spectral.end())
        ++determine;
}


