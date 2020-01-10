#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "chesspiece.h"
#include "chessboard.h"

class Game: public QGraphicsView
{
    Q_OBJECT
public:
    Game(QWidget *parent = 0);

    Chesspiece *pieceToMove;
    QGraphicsTextItem *check;

    void setTurn(QString value);
    void drawChessBoard();
    void drawDeadHolder(int x, int y, QColor color);
    void addToScene(QGraphicsItem *item);

    Chessbox *collection[8][8];

    void Start();
    void removeFromScene(QGraphicsItem *item);

    QList <Chesspiece *> alivePiece;

private:
    QGraphicsScene *gameScene;
    QGraphicsTextItem *turnDisplay;
    QString turn;
    Chessboard *chess;
    QGraphicsRectItem * deadHolder;
};

#endif // GAME_H
