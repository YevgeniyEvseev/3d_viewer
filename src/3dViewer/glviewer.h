#ifndef GLVIEWER_H
#define GLVIEWER_H

extern "C" {
#include "model_3d.h"
}
#include <QOpenGLWidget>
#include <QWidget>
#include <iostream>
#include <string>

class glViewer : public QOpenGLWidget {
 public:
  glViewer(QWidget *parent = nullptr);
  ~glViewer() { dctor_model(model_a); }

 protected:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

 public:
  double x, y, z;
  double rc_1 = 1, rc_2 = 0, rc_3 = 0, vc_1 = 0, vc_2 = 1, vc_3 = 1, bc_1 = 0,
         bc_2 = 0, bc_3 = 0, bc_4 = 0;
  double fin_thickness, type_line = 0, vertex_size = 4, vertex_type = 0;
  int count_vertex;
  int get_vertex[100];
  struct model_t *model_a;
  void get_param_model(int &v, int &p);
 public slots:
  void set_points(char *file);
  void set_update_points(double num, int code_num);
  void set_update_settings(double num, int code_num);
};

double max_array(double array[], int len_array);

#endif  // GLVIEWER_H
