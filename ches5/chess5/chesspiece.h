#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <QGraphicsPixmapItem>
#include "chessbox.h"

class Chessbox;

class Chesspiece: public QGraphicsPixmapItem
{
public:
    Chesspiece(QString team = "", QGraphicsItem *parent = 0);

    void setCurrentBox(Chessbox *box);

    QString getSide();

    bool firstMove;

protected:
    Chessbox *currentBox;
    QString side;
    bool isPlaced;
    QList <Chessbox *> location;
};

#endif // CHESSPIECE_H
