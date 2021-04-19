#include "board.h"

board::board(int row, int column)
{
    rows= row;
    columns = column;
    BoardData = new int*[rows];
    for (int i= 0; i<rows; i++)
        BoardData[i] = new int [columns];
    BoardImages = new QGraphicsPixmapItem*[rows];
    for (int i= 0; i<rows; i++)
        BoardImages[i] = new QGraphicsPixmapItem [columns];
{
// this is initiallizing the 2d dynamic array BoardData if needed
//for (int i = 0; i<12; i++)
//  for (int j=0; j<12; j++)
//    BoardData[i][j] = 0;
//    BoardImages[i][j] = 0;
}
}

void board::FillInBoardData()
{
    QFile MazeFile("Maze.txt");
    MazeFile.open(QIODevice::ReadOnly);
    QTextStream stream(&MazeFile);
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            stream >> BoardData[i][j];
}

void board::FillInBoardImages()
{
    QPixmap bricksImage("Bricks.png"), grassImage("Grass.png");
    bricksImage = bricksImage.scaledToWidth(50);
    bricksImage = bricksImage.scaledToHeight(50);
    grassImage = grassImage.scaledToWidth(50);
    grassImage = grassImage.scaledToHeight(50);
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
        {
            // Set Image
            if (BoardData[i][j] == -1)
                BoardImages[i][j].setPixmap(bricksImage);
            else
                BoardImages[i][j].setPixmap(grassImage);
            // Set Position
            BoardImages[i][j].setPos(100 + 50 * j, 50 + 50 * i);

        }

}

void board::setRows(int row)
{
    rows = row;
}
void board::setColumns(int column)
{
    columns = column;
}

QGraphicsPixmapItem **board::getBoardImages()
{
    return BoardImages;
}
int **board::getBoardData()
{
    return BoardData;
}

int board::getRows()
{
    return rows;
}
int board::getColumns()
{
    return columns;
}




