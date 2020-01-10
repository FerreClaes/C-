#include "rook.h"

Rook::Rook(QString team,QGraphicsItem *parent):Chesspiece(team,parent)
{
    setImage();
}

void Rook::setImage()
{
    if(side == "WHITE")
        setPixmap(QPixmap(":/images/rook1.png"));
    else
        setPixmap(QPixmap(":/images/rook.png"));
}
