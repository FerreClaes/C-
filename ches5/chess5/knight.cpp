#include "knight.h"

Knight::Knight(QString team,QGraphicsItem *parent):Chesspiece(team,parent)
{
    setImage();
}

void Knight::setImage()
{
    if(side == "WHITE")
        setPixmap(QPixmap(":/images/horse1.png"));
    else
        setPixmap(QPixmap(":/images/horse.png"));
}
