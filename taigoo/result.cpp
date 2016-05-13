#include "result.h"
#include "ui_result.h"

Result::Result(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);
}

void Result::showScore(int score)
{
    ui->lcdNumber_4->display(score);
}

void Result::showGood(int good)
{
    ui->lcdNumber->display(good);
}

void Result::showNormal(int normal)
{
    ui->lcdNumber_2->display(normal);
}

void Result::showBad(int bad)
{
    ui->lcdNumber_3->display(bad);
}

Result::~Result()
{
    delete ui;
}
