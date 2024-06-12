
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *array_poligon;
  int count_point_in_faces;
} poligon_t;

poligon_t **init_poligon() { return (poligon_t **)malloc(10000000*sizeof(poligon_t *)); }

poligon_t *add_poligon() { return (poligon_t *)malloc(sizeof(poligon_t)); }

void constr_poligon(poligon_t *poligon) {
  poligon->count_point_in_faces = 0;
  poligon->array_poligon = (int *)malloc(1000 * sizeof(int));
}

void dstr_poligon(poligon_t *poligon) {
  free(poligon->array_poligon);
  free(poligon);
}

void set_value_to_index_poligon(poligon_t *poligon, int index, int value) {
  poligon->count_point_in_faces += 1;
  poligon->array_poligon[index] = value;
}

int get_count_vertex_poligon(poligon_t *poligon) {
  return poligon->count_point_in_faces;
}

int get_value_to_index_poligon(poligon_t *poligon, int index) {
  return poligon->array_poligon[index];
}
