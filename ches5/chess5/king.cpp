#include "king.h"
#include "game.h"

extern Game *game;

King::King(QString team,QGraphicsItem *parent):Chesspiece(team,parent)
{
    setImage();
}

void King::setImage()
{
    if(side == "WHITE")
        setPixmap(QPixmap(":/images/king1.png"));
    else
        setPixmap(QPixmap(":/images/king.png"));
}
