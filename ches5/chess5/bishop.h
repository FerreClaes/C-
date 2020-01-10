#ifndef BISHOP_H
#define BISHOP_H

#include "chesspiece.h"

class Bishop: public Chesspiece
{
public:
    Bishop(QString team, QGraphicsItem *perent = 0);

    void setImage();
};

#endif // BISHOP_H
