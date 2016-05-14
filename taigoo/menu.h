#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "music1.h"
#include "requirement.h"
#include <QObject>
#include <QGraphicsPixmapItem>

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
    //music 1
    void on_pushButton_2_clicked();
    //project requirement
    void selction();
private:
    Ui::menu *ui;
    Music1 *music1;
    Requirement *require;
};

#endif // MENU_H
