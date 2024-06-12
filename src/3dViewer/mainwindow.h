#ifndef MAINWINDOW_H
#define MAINWINDOW_H

extern "C" {
#include "model_3d.h"
}
#include <QBitmap>
#include <QFileDialog>
#include <QMainWindow>
#include <QMouseEvent>
#include <iostream>

#include "glviewer.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
 private slots:
  void on_Open_clicked();
  void on_move_x_valueChanged();
  void on_move_y_valueChanged();
  void on_move_z_valueChanged();
  void on_turn_x_valueChanged();
  void on_turn_y_valueChanged();
  void on_turn_z_valueChanged();
  void on_scale_d_valueChanged();

  void on_rc_1_valueChanged();
  void on_rc_2_valueChanged();
  void on_rc_3_valueChanged();
  void on_vc_1_valueChanged();
  void on_vc_2_valueChanged();
  void on_vc_3_valueChanged();
  void on_bc_1_valueChanged();
  void on_bc_2_valueChanged();
  void on_bc_3_valueChanged();
  void on_bc_4_valueChanged();

  void on_fin_thickness_valueChanged();
  void on_solid_clicked();
  void on_dashes_clicked();
  void on_vertex_size_valueChanged();

  void on_none_clicked();

  void on_square_clicked();

  void createGifFromImages(const QString &imageFilenames,
                           const QString &gifFilename);
  void shootScreen();

  void on_Save_gif_clicked();

  void GetScreenShoot();

  void on_Button_2_clicked();

  void save_param_to_file();

  void open_param_of_file();

 private:
  Ui::MainWindow *ui;
  glViewer *mView;
  QPixmap originalPixmap;
  QTimer *screen_Timer;
  int screen_Count;

  int change_sing(double code_num);
  void change_sing_help(int sing_num);
  double scaling(double num);
  int sing;

  bool activ_record = 0;

  double move_x, move_y, move_z, turn_x, turn_y, turn_z, scale_d, size;
 signals:
  void set_points(char *file);
  void set_update_points(double num, int code_num);
  void set_update_settings(double num, int code_num);
  void signal_get_param(int &v, int &p);
};
#endif  // MAINWINDOW_H
