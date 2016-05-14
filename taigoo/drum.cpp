#include "drum.h"
drum::drum(int type, int appearT)
{
    drumType = type;
    setStartTime(appearT);
    setDrum();
}

void drum::setStartTime(int appearT)
{
    starting = appearT+1;
}

int drum::getStartTime()
{
    return starting;
}

void drum::setDrum()
{
    switch(drumType)
    {
        case 0:
            setPixmap(QPixmap(":/music/image/music/red_s.png"));
            setPos(900,158);
            break;
        case 1:
            setPixmap(QPixmap(":/music/image/music/blue_s.png"));
            setPos(900,158);
            break;
        case 2:
            setPixmap(QPixmap(":/music/image/music/red_b.png"));
            setPos(900,158);
            break;
        case 3:
            setPixmap(QPixmap(":/music/image/music/blue_b.png"));
            setPos(900,158);
            break;
        default:
            break;
    }
}

int drum::getDrum()
{
    return drumType;
}

void drum::move()
{
    if(x() > 250)
    {
        setPos(x() - 2, y());
    }
    else
    {
        emit destroy_drum();
        delete this;
    }
}
