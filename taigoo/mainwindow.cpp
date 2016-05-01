#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Menu(new menu)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Menu;
}

void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if(k->key()==Qt::Key_Enter || k->key()==Qt::Key_Return)
    {
        qDebug() << "Game started";
        this->hide();
        Menu->setGeometry(this->x(), this->y(), 1280, 768);
        Menu->show();
    }
}

