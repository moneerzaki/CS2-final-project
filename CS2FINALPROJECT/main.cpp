//#include "mainwindow.h"
#include "board.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsView view;                          // is the bigger screen in which all scenes are displayed
    QGraphicsScene MazeScene;                    // maze scene during playing mode

    view.setFixedSize(700, 750);
    view.setWindowTitle("Tom and Jerry maze");
    view.setBackgroundBrush(QBrush(Qt::black));

    board MazeBoard(12,12);
    // Add to the Scene
    MazeScene.addItem(*MazeBoard.getBoardImages());
            //MazeScene.addItem()



    view.setScene(&MazeScene);            // define the scene which will be displayed
    view.show();                          //
    return a.exec();
}
