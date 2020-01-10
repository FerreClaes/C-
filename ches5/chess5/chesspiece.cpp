#include "chesspiece.h"
#include "game.h"
#include "king.h"

Chesspiece::Chesspiece(QString team, QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    side = team;
    isPlaced = true;
    firstMove = true;
}

void Chesspiece::setCurrentBox(Chessbox *box)
{
    currentBox = box;
}

QString Chesspiece::getSide()
{
    return side;
}
