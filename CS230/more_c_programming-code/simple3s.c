#include <stdio.h>

// compile me with: gcc --std=c99 -Wall -g simple3 -o simple3
// run me with: ./simple3

// to find out more about getchar: man 3 getchar

int main (int argc, char *argv[]) {
  printf("How old are you? ");
  int age = 0;

  // Map ASCII digits to 2's complement:
  for (char ch = getchar(); ch != '\n'; ch = getchar()) {
    age = 10 * age + (ch - '0');
  }  
  // the above loop is instructive as to how this is done;
  // in practice see also: atoi and scanf/fscanf

  printf("How tall are you? ");
  int height = 0;
  for (char ch = getchar(); ch != '\n'; ch = getchar()) {
    height = 10 * height + (ch - '0');
  }  

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}
