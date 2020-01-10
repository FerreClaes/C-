#ifndef KNIGHT_H
#define KNIGHT_H

#include "chesspiece.h"

class Knight: public Chesspiece
{
public:
    Knight(QString team, QGraphicsItem *perent = 0);

    void setImage();
};

#endif // KNIGHT_H
