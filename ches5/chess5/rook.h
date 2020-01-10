#ifndef ROOK_H
#define ROOK_H

#include "chesspiece.h"

class Rook: public Chesspiece
{
public:
    Rook(QString team, QGraphicsItem *perent = 0);

    void setImage();
};

#endif // ROOK_H
