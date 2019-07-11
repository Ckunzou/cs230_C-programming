#include <stdio.h>

#define YES 1
#define NO  0

// compile me with: gcc --std=c99 -Wall -g lines.c -o lines

// to find out more about putchar: man 3 putchar

int main (int argc, char *argv[]) {
  // Number of lines:
  long long lc = 0;

  // Number of words:
  long long wc = 0;

  // Number of characters:
  long long cc = 0;

  // Determines if we are "in" a word or not:
  int inword = NO;

  char ch;
  while ((ch = getchar()) != EOF) {
    ++cc;

    if (ch == '\n')
      ++lc;

    // TODO: figure out how to count the number of words:
    // What are the characters that can delineate words?
    //   - ' '  : spaces
    //   - '\t' : tabs
    //   - '\n' : newlines
  }

  printf("%lld %lld %lld!\n", lc, wc, cc);

  return 0;
}
