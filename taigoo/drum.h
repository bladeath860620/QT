#ifndef DRUM_H
#define DRUM_H

#include <QObject>
#include <QGraphicsPixmapItem>

class drum : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    drum(int type, int appearT);

public slots:
    void setStartTime(int appearT);
    int getStartTime();
    void setDrum();
    int getDrum();
    void move();

signals:
    void destroy_drum();

private:
    int drumType;
    int starting;
};

#endif // DRUM_H
