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
#include "result.h"
#include <QtMultimedia/QMediaPlayer>

namespace Ui {
class Requirement;
}

class Requirement : public QMainWindow
{
    Q_OBJECT

public:
    explicit Requirement(QWidget *parent = 0);
    int good;
    int normal;
    int bad;
    int score;
    ~Requirement();

public slots:
    void keyPressEvent(QKeyEvent *k);
    void setSpectral();
    void count_score(int);
    void starter();
    void timing();
    void deleted();
    void show_result();

private:
    Ui::Requirement *ui;
    QGraphicsScene *gs;
    QGraphicsView *gv;
    QMovie *gif;
    QTimer *t;
    const int tempo;
    int timer;
    drum* d;
    QVector<drum*> spectral;
    QVector<drum*>::iterator it;
    QVector<drum*>::iterator determine;
    Result *result;
    QMediaPlayer *rs;
    QMediaPlayer *bs;
};

#endif // REQUIREMENT_H
