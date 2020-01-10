#ifndef PAWN_H
#define PAWN_H

#include "chesspiece.h"

class Pawn: public Chesspiece
{
public:
    Pawn(QString team, QGraphicsItem *perent = 0);

    void setImage();
};

#endif // PAWN_H
