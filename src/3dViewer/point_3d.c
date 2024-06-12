
#include <stdio.h>
#include <stdlib.h>
typedef enum { X, Y, Z } axis_t;

typedef struct {
  double x;
  double y;
  double z;
} point_t;

point_t *add_point() { return (point_t *)malloc(sizeof(point_t)); }

point_t **init_point() {
  return (point_t **)malloc(1000000 * sizeof(point_t *));
}

void dstr_point(point_t *point) { free(point); }

double get_value_axis(point_t *point, axis_t axis) {
  double value = 0;
  switch (axis) {
    case X:
      value = point->x;
      break;
    case Y:
      value = point->y;
      break;
    case Z:
      value = point->z;
      break;

    default:
      fprintf(stderr, "it don't axis");
      break;
  }
  return value;
}
void set_value_axis(point_t *point, axis_t axis, double value) {
  switch (axis) {
    case X:
      point->x = value;
      break;
    case Y:
      point->y = value;
      break;
    case Z:
      point->z = value;
      break;
    default:
      fprintf(stderr, "it don't axis");
      break;
  }
}
