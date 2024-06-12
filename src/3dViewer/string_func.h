#ifndef STRING_FUNC_H
#define STRING_FUNC_H

#define min_X 0
#define min_Y 1
#define min_Z 2
#define max_X 3
#define max_Y 4
#define max_Z 5

int parcer_vertex(char *str, double *x, double *y, double *z);
int parcer_poligon(char *str, int *count_point_to_poligon, int *array_poligon);
int check_obj_file(char *path_file);

#endif  // STRING_FUNC_H