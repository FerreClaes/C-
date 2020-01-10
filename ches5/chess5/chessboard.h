#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QGraphicsRectItem>
#include "chesspiece.h"

class Chessboard
{
public:
    Chessboard();
    void drawBoxes(int x, int y);

    void setUpWhite();
    void setUpBlack();

    void addChessPiece();

private:
    QList <Chesspiece *> white;
    QList <Chesspiece *> black;
};

#endif // CHESSBOARD_H
