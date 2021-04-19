#include "boardobject.h"

Cheese::Cheese(int initialRow, int initialColumn)
{
    // Set Image
    QPixmap image("Cheese.png");
    image = image.scaledToWidth(50);
    image = image.scaledToHeight(50);
    setPixmap(image);
    // Set Position
    setPos(100 + 50 * initialColumn, 50 + 50 * initialRow);
}
PowerPellet::PowerPellet(int initialRow, int initialColumn)
{
    // Set Image
    QPixmap image("PowerPellet.png");
    image = image.scaledToWidth(50);
    image = image.scaledToHeight(50);
    setPixmap(image);
    // Set Position
    setPos(100 + 50 * initialColumn, 50 + 50 * initialRow);
}
