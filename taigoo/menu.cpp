#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu),
    music1(new Music1)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
    delete music1;
}

void menu::on_pushButton_clicked()
{
    this->hide();
    music1->setGeometry(this->x(), this->y(), 1280, 768);
    music1->show();
}
