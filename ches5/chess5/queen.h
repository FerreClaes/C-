#ifndef QUEEN_H
#define QUEEN_H

#include "chesspiece.h"

class Queen: public Chesspiece
{
public:
    Queen(QString team, QGraphicsItem *perent = 0);

    void setImage();
};

#endif // QUEEN_H
