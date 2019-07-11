#include <stdio.h>

// compile me with: gcc --std=c99 -Wall -g echo.c -o echo

// to find out more about putchar: man 3 putchar

int main () {
  long long chcount = 0;
  char ch;
  while ((ch = getchar()) != EOF) {
    ++chcount;
    putchar(ch);
  }

  printf("You typed in %lld characters!\n", chcount);

  return 0;
}

/*
  1) Is the number of characters what you expected? What is going on here?
 */
