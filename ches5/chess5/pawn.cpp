#include "pawn.h"

Pawn::Pawn(QString team,QGraphicsItem *parent):Chesspiece(team,parent)
{
    setImage();
}

void Pawn::setImage()
{
    if(side == "WHITE")
        setPixmap(QPixmap(":/images/pawn1.png"));
    else
        setPixmap(QPixmap(":/images/pawn.png"));
}
