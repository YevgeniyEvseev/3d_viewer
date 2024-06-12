#ifndef POLIGON_H
#define POLIGON_H

#define N_max_poligon 100000

struct poligon_t;

struct poligon_t **init_poligon();
struct poligon_t *add_poligon();
void constr_poligon(struct poligon_t *poligon);
void dstr_poligon(struct poligon_t *poligon);
void set_value_to_index_poligon(struct poligon_t *, int index, int value);
int get_value_to_index_poligon(struct poligon_t *, int index);
int get_count_vertex_poligon(struct poligon_t *poligon);

#endif  // POLIGON_H
