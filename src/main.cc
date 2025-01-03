#include <QApplication>
#include <QLocale>

#include "maze_main_win.h"


int main(int argc, char *argv[]) {
  s21::ControllerMaze controller_obj;
  s21::ModelMaze model_obj;
  QApplication a(argc, argv);
  MazeMainWin w(&controller_obj);
  controller_obj.SetModel(&model_obj);
  w.show();
  return a.exec();
}
