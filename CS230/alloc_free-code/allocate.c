#include <stdio.h>
#include <stdlib.h>

int *foo () {
  int b;
  printf("(foo) b = %d; &b = %X\n", b, (unsigned int) &b);
  b = 10;
  return &b;
}

int *bar() {
  int *b = (int*) malloc(sizeof(int));
  return b;
}

int main() {
  int *x;
  int *y;

  x = foo();
  printf("(1) *x = %d; x = %X\n", *x, (unsigned int) x);
  x = foo();
  printf("(2) *x = %d; x = %X\n", *x, (unsigned int) x);

  *x = 52;
  x = foo();
  printf("(3) *x = %d; x = %X\n", *x, (unsigned int) x);

  y = bar();
  printf("(4) *y = %d; y = %X\n", *y, (unsigned int) y);

  x = foo();
  printf("(5) *x = %d; x = %X\n", *x, (unsigned int) x);
}
