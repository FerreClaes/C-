#include "bishop.h"

Bishop::Bishop(QString team,QGraphicsItem *parent):Chesspiece(team,parent)
{
    setImage();
}

void Bishop::setImage()
{
    if(side == "WHITE")
        setPixmap(QPixmap(":/images/bishop1.png"));
    else
        setPixmap(QPixmap(":/images/bishop.png"));
}
