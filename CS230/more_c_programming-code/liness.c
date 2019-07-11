#include <stdio.h>

// compile me with: gcc --std=c99 -Wall -g liness.c -o liness

int main (int argc, char *argv[]) {
  long long lines = 0;
  char ch;
  while ((ch = getchar()) != EOF) {
    if (ch == '\n') {
      ++lines;
    }
  }

  printf("You typed in %lld lines!\n", lines);

  return 0;
}
