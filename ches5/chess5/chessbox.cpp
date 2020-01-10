#include "chessbox.h"
#include "game.h"

Chessbox::Chessbox()
{
    setRect(0,0,100,100);
    brush.setStyle(Qt::SolidPattern);
    setZValue(-1);
    setHasChessPiece(false);
    setChessPieceColor("NONE");
    currentPiece = NULL;
}

Chessbox::~Chessbox()
{
    delete this;
}

void Chessbox::setOriginalColor(QColor value)
{
    originalColor = value;
    setColor(originalColor);
}

void Chessbox::setColor(QColor color)
{
    brush.setColor(color);
    setBrush(color);
}

void Chessbox::placePiece(Chesspiece *piece)
{
    piece->setPos(x()+50-piece->pixmap().width()/2, y()+50-piece->pixmap().width()/2);
    piece->setCurrentBox(this);
    setHasChessPiece(true, piece);
    currentPiece = piece;
}

void Chessbox::setHasChessPiece(bool value, Chesspiece *piece)
{
    hasChessPiece = value;
    if(value)
    {
        setChessPieceColor(piece->getSide());
    }
    else
    {
        setChessPieceColor("NONE");
    }
}

void Chessbox::setChessPieceColor(QString value)
{
    chessPieceColor = value;
}

void Chessbox::resetOriginalColor()
{
    setColor(originalColor);
}

bool Chessbox::getHasChessPiece()
{
    return hasChessPiece;
}

