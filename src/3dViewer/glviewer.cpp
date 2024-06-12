#include "glviewer.h"

#include <QFile>        // Подключаем класс QFile
#include <QTextStream>  // Подключаем класс QTextStream

glViewer::glViewer(QWidget *parent) : QOpenGLWidget(parent) {
  QFile file("param.txt");
  if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream writeStream(&file);
    writeStream >> rc_1;
    writeStream >> rc_2;
    writeStream >> rc_3;
    writeStream >> vc_1;
    writeStream >> vc_2;
    writeStream >> vc_3;
    writeStream >> bc_1;
    writeStream >> bc_2;
    writeStream >> bc_3;
    writeStream >> bc_4;
    writeStream >> type_line;
    writeStream >> vertex_type;
    writeStream >> fin_thickness;
    writeStream >> vertex_size;
  }
  model_a = NULL;
}

// glViewer::~glViewer() {}

void glViewer::initializeGL() { glEnable(GL_DEPTH_TEST); }

void glViewer::resizeGL(int w, int h) {
  double max = 1;
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  if (model_a) {
    max = max_vertex(model_a);
    scale_model(model_a, 1 / max);
  }
  glOrtho(-2, 2, -2, 2, -100, 100);
}

void glViewer::paintGL() {
  if (model_a) {
    glClearColor(bc_1, bc_2, bc_3, bc_4);
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glFrustum(1, 1, 1, 1, 1, 2);
    glLineWidth(fin_thickness);
    glLineStipple(1, 0x00FF);
    if (type_line) glEnable(GL_LINE_STIPPLE);
    for (int i = 1; i < get_count_poligon(model_a); i++) {
      get_poligon_vertex(model_a, i, &count_vertex, get_vertex);
      for (int j = 0; j < count_vertex; j++) {
        get_point_vertex(model_a, (get_vertex[j] - 1), &x, &y, &z);
        glBegin(GL_LINE_LOOP);
        glColor3f(rc_1, rc_2, rc_3);
        glVertex3d(x, y, z);
      }
      glEnd();
    }
    if (type_line) glDisable(GL_LINE_STIPPLE);
    if (vertex_type) {
      glPointSize(vertex_size);
      for (int i = 1; i < get_count_poligon(model_a); i++) {
        get_poligon_vertex(model_a, i, &count_vertex, get_vertex);
        for (int j = 0; j < count_vertex; j++) {
          get_point_vertex(model_a, (get_vertex[j] - 1), &x, &y, &z);
          glBegin(GL_POINTS);
          glColor3f(vc_1, vc_2, vc_3);
          glVertex3d(x, y, z);
        }
        glEnd();
      }
    }
    glClear(GL_DEPTH_BUFFER_BIT);
  }
}

void glViewer::get_param_model(int &v, int &p) {
  v = get_count_vertex(model_a);
  p = get_count_poligon(model_a) - 1;
}

void glViewer::set_points(char *file) {
  if (model_a) {
    dctor_model(model_a);
  }
  model_a = init_model();
  ctor_model(model_a);
  read_file(model_a, file);
  double Axis[6] = {0};
  get_extremum_point(model_a, Axis);
  move_model(model_a, X, -(Axis[3] + Axis[0]) / 2);
  move_model(model_a, Y, -(Axis[4] + Axis[1]) / 2);
  move_model(model_a, Z, -(Axis[5] + Axis[2]) / 2);
  double max = max_array(Axis, 6);
  scale_model(model_a, 1 / max);
  update();
}

void glViewer::set_update_points(double num, int code_num) {
  switch (code_num) {
    case 0:
      move_model(model_a, X, num * 0.02);
      break;
    case 1:
      move_model(model_a, Y, num * 0.02);
      break;
    case 2:
      move_model(model_a, Z, num * 0.02);
      break;
    case 3:
      rotated_model_X(model_a, num * 0.02);
      break;
    case 4:
      rotated_model_Y(model_a, num * 0.02);
      break;
    case 5:
      rotated_model_Z(model_a, num * 0.02);
      break;
    case 6:
      scale_model(model_a, num);
  }
  update();
}

void glViewer::set_update_settings(double num, int code_num) {
  switch (code_num) {
    case 0:
      rc_1 = num;
      break;
    case 1:
      rc_2 = num;
      break;
    case 2:
      rc_3 = num;
      break;
    case 3:
      vc_1 = num;
      break;
    case 4:
      vc_2 = num;
      break;
    case 5:
      vc_3 = num;
      break;
    case 6:
      bc_1 = num;
      break;
    case 7:
      bc_2 = num;
      break;
    case 8:
      bc_3 = num;
      break;
    case 9:
      bc_4 = num;
      break;
    case 10:
      fin_thickness = num;
      break;
    case 11:
      type_line = num;
      break;
    case 12:
      type_line = num;
      break;
    case 13:
      vertex_size = num;
      break;
    case 14:
      vertex_type = num;
      break;
    case 15:
      vertex_type = num;
      break;
  }
  update();
}

double max_array(double array[], int len_array) {
  double max = array[0];
  for (int i = 1; i < len_array; ++i) {
    if (array[0] < array[i]) {
      max = array[i];
    }
  }
  return max;
}
