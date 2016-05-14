#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu),
    music1(new Music1),
    require(new Requirement)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
    delete music1;
    delete require;
}

void menu::on_pushButton_clicked()
{
    /*this->hide();
    music1->setGeometry(this->x(), this->y(), 1024, 571);
    music1->show();*/
}

void menu::on_pushButton_2_clicked()
{
    this->hide();
    require->setGeometry(this->x(), this->y(), 1024, 571);
    require->show();
    require->starter();
}

void menu::selction()
{

}

