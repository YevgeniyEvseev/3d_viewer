#include "string_func.h"

#include "stdio.h"
#include "stdlib.h"

int is_digit(char c) {
  int result = 0;
  if (c >= '0' && c <= '9') {
    result = 1;
  }
  return result;
}

void clear_array(char *str, int n) {
  for (int i = 0; i < n; i++) {
    str[i] = '\0';
  }
}

int parcer_vertex(char *str, double *x, double *y, double *z) {
  int check_str = 1, i = 0, k = 0;
  double temp[3] = {0};
  char c, sign = 1;
  char tmp_str[100] = {0};
  do {
    if ((c = *str) == ' ' || c == '\n' || c == '\0') {
      ;
    } else if (is_digit(c) || c == '.') {
      while (is_digit(c) || c == '.') {
        if (k < 100) {
          tmp_str[k] = c;
          k++;
        }
        c = *++str;
      }
      if (i < 3) {
        temp[i] = sign * atof(tmp_str);
        clear_array(tmp_str, 100);
        sign = 1;
        i++;
      }
    } else if (c == '-') {
      sign = -1;
    } else {
      check_str = 0;
    }
    str++;
    k = 0;
  } while (!(c == '\0' || c == '\n' || c == '\v'));
  if (check_str) {
    *x = temp[0];
    *y = temp[1];
    *z = temp[2];
  }
  return check_str;
}

int parcer_poligon(char *str, int *count_point_to_poligon, int *array_poligon) {
  int check_str = 1, i = 0, n = 1, k = 0;
  int *temp = malloc(1000 * sizeof(int));
  char c;
  char tmp_str[20] = {0};
  do {
    if ((c = *str) == ' ' || c == '\n' || c == '\0' || c == '\r') {
      ;
    } else if (is_digit(c)) {
      while (is_digit(c)) {
        if (k < 20) {
          tmp_str[k] = c;
          k++;
        }
        c = *++str;
      }
      if (i > 1000 * n) {
        n += 1;
        temp = realloc(temp, 1000 * n * sizeof(int));
      }
      temp[i] = atoi(tmp_str);
      clear_array(tmp_str, 20);
      i++;
      while (!(c == ' ' || c == '\n' || c == '\0' || c == '\v' || c == '\r')) {
        c = *++str;
      }
    } else {
      check_str = 0;
    }
    str++;
    k = 0;
  } while (!(c == '\0' || c == '\n' || c == '\v' || c == '\r'));
  if (check_str) {
    *count_point_to_poligon = i;
    for (int j = 0; j < i; j++) {
      array_poligon[j] = temp[j];
    }
  }
  free(temp);
  return check_str;
}
