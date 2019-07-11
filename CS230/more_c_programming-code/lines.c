#include <stdio.h>

// compile me with: gcc --std=c99 -Wall -g lines.c -o lines

int main (int argc, char *argv[]) {
  long long lines = 0;
  char ch;
  while ((ch = getchar()) != EOF) {
    // How do we count the number of lines?
  }

  printf("You typed in %lld lines!\n", lines);

  return 0;
}

