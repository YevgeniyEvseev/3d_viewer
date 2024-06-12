
#include <stdio.h>
#include <stdlib.h>

#include "math.h"
#include "point_3d.h"
#include "poligon.h"
#include "string_func.h"

typedef struct {
  struct point_t **point;
  struct poligon_t **poligon;
  int count_vertex;
  int count_poligon;
  double centr_X;
  double centr_Y;
  double centr_Z;
  double extremum_axis[6];
} model_t;

model_t *init_model() { return (model_t *)malloc(sizeof(model_t)); }

void ctor_model(model_t *model) {
  model->count_poligon = 0;
  model->count_vertex = 0;
  model->point = init_point();
  model->poligon = init_poligon();
  model->centr_X = 0;
  model->centr_Y = 0;
  model->centr_Z = 0;
  for (int i = 0; i < 6; i++) {
    model->extremum_axis[0] = 0;
  }
}

void dctor_model(model_t *model) {
  for (int i = 0; i < model->count_vertex; i++) {
    dstr_point(model->point[i]);
  }
  for (int i = 0; i < model->count_poligon; i++) {
    dstr_poligon(model->poligon[i]);
  }
  free(model->point);
  free(model->poligon);
  free(model);
}

void get_extremum_point(model_t *model, double *extremum) {
  for (int i = 0; i < 6; i++) {
    extremum[i] = model->extremum_axis[i];
  }
}

void extremum(double *extr_Axis, int count_point, double x, double y,
              double z) {
  if (count_point == 1) {
    extr_Axis[min_X] = extr_Axis[max_X] = x;
    extr_Axis[min_Y] = extr_Axis[max_Y] = y;
    extr_Axis[min_Z] = extr_Axis[max_Z] = z;
  } else {
    if (x > extr_Axis[max_X]) extr_Axis[max_X] = x;
    if (y > extr_Axis[max_Y]) extr_Axis[max_Y] = y;
    if (z > extr_Axis[max_Z]) extr_Axis[max_Z] = z;

    if (extr_Axis[min_X] > x) extr_Axis[min_X] = x;
    if (extr_Axis[min_Y] > y) extr_Axis[min_Y] = y;
    if (extr_Axis[min_Z] > z) extr_Axis[min_Z] = z;
  }
}

double max_vertex(model_t *model_a) {
  double ex[6] = {-1, -1, -1, 1, -1, 1};
  double max;
  get_extremum_point(model_a, ex);
  max = (ex[3] >= ex[4]) ? ex[3] : ex[4];
  max = (max >= ex[5]) ? max : ex[5];
  return max;
}

void add_point_vertex(model_t *model, double x, double y, double z) {
  int index = model->count_vertex;
  model->point[index] = add_point();
  model->count_vertex += 1;
  set_value_axis(model->point[index], X, x);
  set_value_axis(model->point[index], Y, y);
  set_value_axis(model->point[index], Z, z);
}
void add_poligon_vertex(model_t *model, int count_vertex, int *vertex) {
  int index = model->count_poligon;
  model->poligon[index] = add_poligon();
  model->count_poligon += 1;
  constr_poligon(model->poligon[index]);
  for (int i = 0; i < count_vertex; i++) {
    set_value_to_index_poligon(model->poligon[index], i, vertex[i]);
  }
}

void get_point_vertex(model_t *model, int index, double *x, double *y,
                      double *z) {
  *x = get_value_axis(model->point[index], X);
  *y = get_value_axis(model->point[index], Y);
  *z = get_value_axis(model->point[index], Z);
}

int get_count_vertex(model_t *model) {
  int count = model->count_vertex;
  return count;
}

void get_poligon_vertex(model_t *model, int index, int *count_vertex,
                        int *vertex) {
  *count_vertex = get_count_vertex_poligon(model->poligon[index]);
  for (int i = 0; i < *count_vertex; i++) {
    vertex[i] = get_value_to_index_poligon(model->poligon[index], i);
  }
}

int get_count_poligon(model_t *model) {
  int count = model->count_poligon;
  return count;
}

void get_centr_axes(model_t *model, double *x, double *y, double *z) {
  *x = model->centr_X;
  *y = model->centr_Y;
  *z = model->centr_Z;
}

int parser(model_t *dest, char *str, double *extremum_axis) {
  int rez = 0;
  char c;
  double x, y, z;
  int count_vertex;
  int poligon[1000] = {0};
  do {
    while (!((c = *str++) == 'v' || c == 'f' || c == '\n')) {
      ;
    }
    if (c == 'v') {
      if (parcer_vertex(str, &x, &y, &z)) {
        add_point_vertex(dest, x, y, z);
        extremum(extremum_axis, dest->count_vertex, x, y, z);
      }
    }
    if (c == 'f') {
      if (parcer_poligon(str, &count_vertex, poligon)) {
        add_poligon_vertex(dest, count_vertex, poligon);
      }
    }
  } while (!(c == '\n' || c == '\0'));

  if (dest->count_vertex > 2 && dest->count_poligon > 0) {
    rez = 1;
    dest->centr_X = (extremum_axis[max_X] + extremum_axis[min_X]) / 2;
    dest->centr_Y = (extremum_axis[max_Y] + extremum_axis[min_Y]) / 2;
    dest->centr_Z = (extremum_axis[max_Z] + extremum_axis[min_Z]) / 2;
  }
  return rez;
}

int read_file(model_t *dest, char *path_file) {
  int res = 0;
  char str[1000] = {0};
  char *estr;
  FILE *file = fopen(path_file, "r");
  if (!check_obj_file(path_file)) {
    return 1;
  }
  if (file == NULL) return 3;
  while (1) {
    estr = fgets(str, sizeof(str), file);
    if (estr == NULL) {
      if (feof(file) != 0) {
        // if file get end
        //  fprintf(stderr, "\nThe file is finish\n");
        break;
      } else {
        res = 1;
        fprintf(stderr, "\nError read file\n");
        break;
      }
    }
    parser(dest, str, dest->extremum_axis);
  }
  if (fclose(file) == EOF) {
    res = 2;
    fprintf(stderr, "error \n");
  }
  return res;
}

void move_model(model_t *model, axis_t axes, double axes_move) {
  double tmp = 0;
  int count_vert = model->count_vertex;
  for (int i = 0; i < count_vert; i++) {
    tmp = get_value_axis(model->point[i], axes);
    set_value_axis(model->point[i], axes, tmp + axes_move);
  }
  switch (axes) {
    case X:
      model->centr_X += axes_move;
      break;
    case Y:
      model->centr_Y += axes_move;
      break;
    case Z:
      model->centr_Z += axes_move;
      break;

    default:
      break;
  }
}

void scale_model(model_t *model, double value) {
  double tmp = 0;
  int count_vert = model->count_vertex;
  for (int i = 0; i < count_vert; i++) {
    for (int j = 0; j < 3; j++) {
      tmp = get_value_axis(model->point[i], j);
      set_value_axis(model->point[i], j, tmp * value);
    }
  }
  model->centr_X *= value;
  model->centr_Y *= value;
  model->centr_Z *= value;
}

void rotated_model_X(model_t *model, double value) {
  double tmp_x = 0, tmp_y, tmp_z;
  int count_vert = model->count_vertex;
  for (int i = 0; i < count_vert; i++) {
    get_point_vertex(model, i, &tmp_x, &tmp_y, &tmp_z);
    set_value_axis(model->point[i], Y, tmp_y * cos(value) - tmp_z * sin(value));
    set_value_axis(model->point[i], Z, tmp_y * sin(value) + tmp_z * cos(value));
  }
  tmp_y = model->centr_Y;
  tmp_z = model->centr_Z;
  model->centr_Y = tmp_y * cos(value) - tmp_z * sin(value);
  model->centr_Z = tmp_y * sin(value) + tmp_z * cos(value);
}

void rotated_model_Y(model_t *model, double value) {
  double tmp_x = 0, tmp_y, tmp_z;
  int count_vert = model->count_vertex;
  for (int i = 0; i < count_vert; i++) {
    get_point_vertex(model, i, &tmp_x, &tmp_y, &tmp_z);
    set_value_axis(model->point[i], X, tmp_x * cos(value) + tmp_z * sin(value));
    set_value_axis(model->point[i], Z,
                   -tmp_x * sin(value) + tmp_z * cos(value));
  }
  tmp_x = model->centr_X;
  tmp_z = model->centr_Z;
  model->centr_X = tmp_x * cos(value) + tmp_z * sin(value);
  model->centr_Z = -tmp_x * sin(value) + tmp_z * cos(value);
}

void rotated_model_Z(model_t *model, double value) {
  double tmp_x = 0, tmp_y, tmp_z;
  int count_vert = model->count_vertex;
  for (int i = 0; i < count_vert; i++) {
    get_point_vertex(model, i, &tmp_x, &tmp_y, &tmp_z);
    set_value_axis(model->point[i], X, tmp_x * cos(value) - tmp_y * sin(value));
    set_value_axis(model->point[i], Y, tmp_x * sin(value) + tmp_y * cos(value));
  }
  tmp_x = model->centr_X;
  tmp_y = model->centr_Y;
  model->centr_X = tmp_x * cos(value) - tmp_y * sin(value);
  model->centr_Y = tmp_x * sin(value) + tmp_y * cos(value);
}

int check_obj_file(char *path_file) {
  int count = 0;
  if (path_file == NULL) {
    return 0;
  }
  while (*(++path_file) != '\0') {
    // path_file++;
    count++;
  }
  path_file--;
  if (count > 5 && *path_file == 'j') {
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
      sum = *(path_file - i);
    }
    if (sum != ('o' + 'b' + 'j' + '.')) return 1;
  }
  return 0;
}