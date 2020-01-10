#ifndef CHESSBOX_H
#define CHESSBOX_H

#include <QGraphicsRectItem>
#include <QBrush>
#include "chesspiece.h"

class Chesspiece;

class Chessbox: public QGraphicsRectItem
{
public:
    Chessbox();
    ~Chessbox();

    int rowLoc;
    int colLoc;
    void setOriginalColor(QColor value);

    void setColor(QColor color);
    void placePiece(Chesspiece *piece);
    void setHasChessPiece(bool value, Chesspiece *piece = 0);
    void setChessPieceColor(QString value);

    Chesspiece *currentPiece;

    void resetOriginalColor();
    bool getHasChessPiece();
private:
    QColor originalColor;
    QBrush brush;
    bool hasChessPiece;
    QString chessPieceColor;
};

#endif // CHESSBOX_H
