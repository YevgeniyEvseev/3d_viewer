#ifndef MODEL_3D_H
#define MODEL_3D_H

#define N_max 1000000

typedef enum { X, Y, Z } axis_t;

struct model_t;

struct model_t *init_model();
void ctor_model(struct model_t *model);
void dctor_model(struct model_t *model);
void add_point_vertex(struct model_t *model, double x, double y, double z);
void add_poligon_vertex(struct model_t *model, int vertex,
                        int *array_index_point);
void get_point_vertex(struct model_t *model, int index, double *x, double *y,
                      double *z);
void get_poligon_vertex(struct model_t *model, int index, int *count_vertex,
                        int *vertex);
void parser(struct model_t *dest, char *str, double *extremum_axis);
int read_file(struct model_t *dest, char *path_file);
int get_count_vertex(struct model_t *model);
int get_count_poligon(struct model_t *model);
void get_centr_axes(struct model_t *model, double *x, double *y, double *z);
void move_model(struct model_t *model, axis_t axes, double axes_move);
void scale_model(struct model_t *model, double value);
void rotated_model_X(struct model_t *model, double value);
void rotated_model_Y(struct model_t *model, double value);
void rotated_model_Z(struct model_t *model, double value);
void get_extremum_point(struct model_t *model, double *extremum);
double max_vertex(struct model_t *model_a);

#endif  // MODEL_3D_H
