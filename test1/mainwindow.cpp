#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->progressBar->setValue(100);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->progressBar->setValue(ui->progressBar->value()+10);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->progressBar->setValue(0);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->progressBar->setValue(ui->progressBar->value()-10);
}

void MainWindow::on_pushButton_5_pressed()
{
    ui->progressBar->setValue(ui->progressBar->value()+1);

    if(ui->progressBar->value()<100)
    {
        usleep(30000);
        MainWindow::on_pushButton_5_pressed();
    }
}

void MainWindow::on_pushButton_5_released()
{
    return;
}

void MainWindow::on_pushButton_6_pressed()
{
    ui->progressBar->setValue(ui->progressBar->value()-1);

    if(ui->progressBar->value()>0)
    {
        usleep(30000);
        MainWindow::on_pushButton_6_pressed();
    }
}

QTimer *timer;

timer = new QTimer(this);
