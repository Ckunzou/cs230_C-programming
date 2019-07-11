#include <stdio.h>

// compile me with: gcc -Wall -g simple3 -o simple3

// to find out more about getchar: man 3 getchar

int main (int argc, char *argv[]) {
  printf("How old are you? ");
  int age = getchar();
  getchar();
  printf("How tall are you? ");
  int height = getchar();
  getchar();

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}

/*
  1) What is the first problem with this program?
  2) What is the second problem with this program?
  3) How do you fix it?
 */
