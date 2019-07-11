#include <stdio.h>

// compile me with: gcc -Wall -g simple2 -o simple2

// to find out more about printf: man 3 printf

int main (int argc, char *argv[]) {
  int age    = 10;
  int height = 72;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}

/*
  1) What if we removed the `age` variable from the first printf?
  2) What if we removed the initialization of `age`?
 */
