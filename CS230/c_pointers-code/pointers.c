#include <stdio.h>

int main() {
  int *ptr;
  int *ptr2;
  int x = 2;
  int y = 5;
  ptr = &x;
  ptr2 = &y;

  printf("ptr  = 0x%X\n", (unsigned int) (ptr+1));
  printf("*ptr = %d\n", *(ptr+1));

  printf("ptr2 = 0x%X\n", (unsigned int) ptr2);
  printf("*ptr2 = %d\n", *ptr2);

  
  return 0;
}
