#ifndef POINT_3D_H
#define POINT_3D_H
#define N_max_point 100000

typedef enum { X, Y, Z } axis_t;

struct point_t;

struct point_t** init_point();
struct point_t* add_point();
double get_value_axis(struct point_t*, axis_t);
void set_value_axis(struct point_t*, axis_t, double);
void dstr_point(struct point_t* point);

#endif  // POINT_3D_H
