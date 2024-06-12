#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "model_3d.h"

#define START                             \
  struct model_t *model_a = init_model(); \
  char file_name[200] = "test1.obj";      \
  ctor_model(model_a);                    \
  read_file(model_a, file_name);

#define NO_ERRORS 0

START_TEST(test_count_vertex_and_facets) {
  START;
  int vertex_orig = 8;
  int facets_orig = 12;

  ck_assert_int_eq(vertex_orig, get_count_vertex(model_a));
  ck_assert_int_eq(facets_orig, get_count_poligon(model_a));
  dctor_model(model_a);
}
END_TEST

START_TEST(test_poligon_vertex) {
  START;
  double x, y, z;
  double vertex[8][3] = {{10, 10, 0}, {0, 10, 0},  {0, 10, 10}, {10, 10, 10},
                         {10, 0, 0},  {10, 0, 10}, {0, 0, 0},   {0, 0, 10}};
  int check_count_vertex_in_facets = 0;
  for (int i = 0; i < 8; i++) {
    get_point_vertex(model_a, i, &x, &y, &z);

    if (!(vertex[i][0] == x && vertex[i][1] == y && vertex[i][2] == z)) {
      check_count_vertex_in_facets = 1;
    }
  }
  ck_assert_int_eq(check_count_vertex_in_facets, NO_ERRORS);
  dctor_model(model_a);
}
END_TEST

START_TEST(test_extremum_vertex) {
  START;
  double ex[6] = {0, 0, 0, 10, 10, 10};
  double ex_test[6] = {0};
  get_extremum_point(model_a, ex_test);
  int check_count_vertex_in_facets = 0;
  for (int i = 0; i < 6; i++) {
    if (ex_test[i] != ex[i]) {
      check_count_vertex_in_facets = 1;
    }
  }
  ck_assert_int_eq(check_count_vertex_in_facets, NO_ERRORS);
  dctor_model(model_a);
}

START_TEST(test_count_poligon_and_index_vertex) {
  START;
  int count_vertex;
  int get_vertex[10] = {0};
  int orig[12] = {0};
  int orig_array[12][6] = {
      {1, 2, 4, 4, 2, 3}, {4, 2, 3, 4, 0, 0}, {5, 1, 6, 0, 0, 0},
      {6, 1, 4, 0, 0, 0}, {7, 5, 8, 0, 0, 0}, {8, 5, 6, 0, 0, 0},
      {2, 7, 3, 0, 0, 0}, {3, 7, 8, 0, 0, 0}, {8, 6, 3, 0, 0, 0},
      {3, 6, 4, 0, 0, 0}, {2, 1, 7, 3, 6, 4}, {7, 1, 5, 0, 0, 0}};
  orig[0] = 6;
  orig[1] = 4;
  orig[2] = 3;
  orig[3] = 3;
  orig[4] = 3;
  orig[5] = 3;
  orig[6] = 3;
  orig[7] = 3;
  orig[8] = 3;
  orig[9] = 3;
  orig[10] = 6;
  orig[11] = 3;
  int res = 0;
  for (int i = 0; i < get_count_poligon(model_a); i++) {
    get_poligon_vertex(model_a, i, &count_vertex, get_vertex);
    if (count_vertex != orig[i]) {
      res = 1;
    } else {
      for (int j = 0; j < count_vertex; j++) {
        if (get_vertex[j] != orig_array[i][j]) {
          res = 1;
        }
      }
    }
  }
  ck_assert_int_eq(res, NO_ERRORS);
  dctor_model(model_a);
}
END_TEST

START_TEST(test_affin) {
  START;
  move_model(model_a, X, 10);
  move_model(model_a, Y, 10);
  move_model(model_a, Z, 10);
  scale_model(model_a, 0.5);
  rotated_model_X(model_a, 3.14157);
  rotated_model_Y(model_a, 3.14157);
  rotated_model_Z(model_a, 3.14157);
  double x, y, z;
  double vertex[8][3] = {{10, 10, 5}, {5, 10, 5},  {5, 10, 10}, {10, 10, 10},
                         {10, 5, 5},  {10, 5, 10}, {5, 5, 5},   {5, 5, 10}};
  int check_count_vertex_in_facets = 0;
  for (int i = 0; i < 8; i++) {
    get_point_vertex(model_a, i, &x, &y, &z);

    if (!((vertex[i][0] - x) < 0.001 && (vertex[i][1] - y) < 0.001 &&
          (vertex[i][2] - z) < 0.001)) {
      check_count_vertex_in_facets = 1;
    }
  }

  ck_assert_int_eq(check_count_vertex_in_facets, NO_ERRORS);
  dctor_model(model_a);
}
END_TEST

START_TEST(test_no_file) {
  struct model_t *model_a = init_model();
  char file_name[200] = "test31.obj";
  ctor_model(model_a);
  int res = read_file(model_a, file_name);
  dctor_model(model_a);
  ck_assert_int_eq(res, 3);
}

START_TEST(test_no_file1) {
  struct model_t *model_a = init_model();
  char file_name[200];
  ctor_model(model_a);
  int res = read_file(model_a, file_name);
  dctor_model(model_a);
  ck_assert_int_eq(res, 1);
}

START_TEST(test_no_file2) {
  struct model_t *model_a = init_model();
  char file_name[200] = "1.pdf";
  ctor_model(model_a);
  int res = read_file(model_a, file_name);
  dctor_model(model_a);
  ck_assert_int_eq(res, 1);
}

START_TEST(test_extrem_file) {
  struct model_t *model_a = init_model();
  char file_name[200] = "ball.obj";
  ctor_model(model_a);
  int res = read_file(model_a, file_name);
  dctor_model(model_a);
  double Axis[6] = {0};
  get_extremum_point(model_a, Axis);
  ck_assert_int_eq(res, 0);
}

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, test_count_vertex_and_facets);
  tcase_add_test(tc1_1, test_extremum_vertex);
  tcase_add_test(tc1_1, test_poligon_vertex);
  tcase_add_test(tc1_1, test_count_poligon_and_index_vertex);
  tcase_add_test(tc1_1, test_affin);
  tcase_add_test(tc1_1, test_no_file);
  tcase_add_test(tc1_1, test_no_file1);
  tcase_add_test(tc1_1, test_no_file2);
  tcase_add_test(tc1_1, test_extrem_file);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
