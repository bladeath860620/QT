#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "music1.h"
namespace Ui {
class menu;
}

class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu *ui;
    Music1 *music1;
};

#endif // MENU_H
