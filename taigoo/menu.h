#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "music1.h"
#include "requirement.h"
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QDebug>
#include <QGraphicsScene>

namespace Ui {
class menu;
}

class menu : public QMainWindow//, public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();
public slots:
    void keyPressEvent(QKeyEvent *K);

private slots:
    void on_pushButton_clicked();
    //music 1
    void on_pushButton_2_clicked();
    //project requirement
private:
    Ui::menu *ui;
    Music1 *music1;
    Requirement *require;
    int type;
};

#endif // MENU_H
