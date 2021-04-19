#ifndef BOARD_H
// this is board.h file
#define BOARD_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QFile>
#include <QTextStream>
#include <QGraphicsPixmapItem>

class board
{
private:

    int rows;
    int columns;
    int **BoardData;
    QGraphicsPixmapItem **BoardImages;

public:

    board(int row, int column);

    void FillInBoardData();
    void FillInBoardImages();
    void setRows(int row);
    void setColumns(int column);

    QGraphicsPixmapItem ** getBoardImages();
    int ** getBoardData();
    int getRows();
    int getColumns();


};

#endif // BOARD_H
