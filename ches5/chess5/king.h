#ifndef KING_H
#define KING_H

#include "chesspiece.h"

class King: public Chesspiece
{
public:
    King(QString team,QGraphicsItem *parent = 0);

    void setImage();
};

#endif // KING_H
