#ifndef MUSIC1_H
#define MUSIC1_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QMovie>
//#include "menu.h"

namespace Ui {
class Music1;
}

class Music1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Music1(QWidget *parent = 0);
    ~Music1();

public slots:
    void keyPressEvent(QKeyEvent *k);

private:
    Ui::Music1 *ui;
    //menu *Menu;
    QMovie *gif;
};

#endif // MUSIC1_H
