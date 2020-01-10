#include "game.h"
#include <QDebug>
#include <QPixmap>

Game::Game(QWidget *parent): QGraphicsView(parent)
{
    gameScene = new QGraphicsScene();
    gameScene->setSceneRect(0, 0, 1400, 900);

    setFixedSize(1400, 900);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(gameScene);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBackgroundBrush(brush);
    pieceToMove = NULL;
    //turn
    turnDisplay = new QGraphicsTextItem();
    turnDisplay->setPos(width()/2-100, 10);
    turnDisplay->setZValue(1);
    turnDisplay->setDefaultTextColor(Qt::white);
    turnDisplay->setFont(QFont("", 18));
    turnDisplay->setPlainText("Turn : White");
    //check
    check = new QGraphicsTextItem();
    check->setPos(width()/2-100, 860);
    check->setZValue(4);
    check->setDefaultTextColor(Qt::red);
    check->setFont(QFont("", 18));
    check->setPlainText("check!!!");
    check->setVisible(false);
    setTurn("WHITE");
}

void Game::setTurn(QString value)
{
    turn = value;
}

void Game::drawChessBoard()
{
    qDebug("draw chessboard");
    chess = new Chessboard();
    drawDeadHolder(0, 0, Qt::lightGray);
    drawDeadHolder(1100, 0, Qt::lightGray);
    chess->drawBoxes(width()/2-400, 50);
    qDebug("chessboard drawn");
}

void Game::drawDeadHolder(int x, int y, QColor color)
{
    deadHolder = new QGraphicsRectItem(x, y, 300, 900);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(color);
    deadHolder->setBrush(brush);
    addToScene(deadHolder);
}

void Game::addToScene(QGraphicsItem *item)
{
    gameScene->addItem(item);
}

void Game::Start()
{
    qDebug("begin Start");
    addToScene(turnDisplay);
    QGraphicsTextItem *whitePiece = new QGraphicsTextItem();

    whitePiece->setPos(70, 10);
    whitePiece->setZValue(1);
    whitePiece->setDefaultTextColor(Qt::white);
    whitePiece->setFont(QFont("", 14));
    whitePiece->setPlainText("WHITE PIECE");
    addToScene(whitePiece);

    QGraphicsTextItem *blackPiece = new QGraphicsTextItem();
    blackPiece->setPos(1170, 10);
    blackPiece->setZValue(1);
    blackPiece->setDefaultTextColor(Qt::white);
    blackPiece->setFont(QFont("", 14));
    blackPiece->setPlainText("BLACK PIECE");
    addToScene(blackPiece);
    addToScene(check);
    chess->addChessPiece();
    qDebug("Start");
}

void Game::removeFromScene(QGraphicsItem *item)
{
    gameScene->removeItem(item);
}
