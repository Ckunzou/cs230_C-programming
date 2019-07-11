#include <stdio.h>

typedef union value value;
union value {
  int   i;
  float f;
  char  c[4];
};

typedef enum type type;
enum type {
  INT, FLOAT, CHAR
};

typedef struct Variable Variable;
struct Variable {
  type  ty;
  value val;
};

int main (int argc, char const *argv[]) {
  Variable var = { INT, { 72 } };
  printf("%d\n", var.val.i);
  printf("%f\n", var.val.f);
  printf("%c\n", var.val.c[0]);

  var.val.c[0] = 0xEF;
  var.val.c[1] = 0xBE;
  var.val.c[2] = 0xAD;
  var.val.c[3] = 0xDE;
  printf("%X\n", var.val.i);
  return 0;
}
