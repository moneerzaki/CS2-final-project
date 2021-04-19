#ifndef BOARDOBJECT_H
#define BOARDOBJECT_H

#include <QGraphicsPixmapItem>

class Cheese : public QGraphicsPixmapItem
{
public:
    Cheese(int initialRow, int initialColumn);
};
class PowerPellet : public QGraphicsPixmapItem
{
public:
    PowerPellet(int initialRow, int initialColumn);
};

#endif // BOARDOBJECT_H
