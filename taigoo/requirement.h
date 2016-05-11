#ifndef REQUIREMENT_H
#define REQUIREMENT_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QMovie>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QLabel>
#include <QVector>
#include <cstdlib>
#include <ctime>
#include "drum.h"
namespace Ui {
class Requirement;
}

class Requirement : public QMainWindow
{
    Q_OBJECT

public:
    explicit Requirement(QWidget *parent = 0);
    ~Requirement();
public slots:
    void keyPressEvent(QKeyEvent *k);
    void setSpectral();
    void count_score();
    void starter();
    void timing();
    void deleted();

private:
    Ui::Requirement *ui;
    QGraphicsScene *gs;
    QGraphicsView *gv;
    QMovie *gif;
    QTimer *t;
    const int tempo = 10;
    int score;
    int timer;
    drum* d;
    QVector<drum*> spectral;
    QVector<drum*>::iterator it;
    QVector<drum*>::iterator determine;
};

#endif // REQUIREMENT_H
