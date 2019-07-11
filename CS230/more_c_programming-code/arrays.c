#include <stdio.h>

// compile me with: gcc -o arrays arrays.c

#define SUNDAY    0
#define MONDAY    1
#define TUESDAY   2
#define WEDNESDAY 3
#define THURSDAY  4
#define FRIDAY    5
#define SATURDAY  6
#define TOTDAYS   SATURDAY+1

#define AVAIL     1
#define NOTAVAIL  0

int main (int argc, char *argv[]) {
  int availability[TOTDAYS] = { 
    AVAIL, NOTAVAIL, NOTAVAIL, AVAIL,
    NOTAVAIL, AVAIL, NOTAVAIL
  };

  printf("availability:\n");
  for (int day = SUNDAY; day <= SATURDAY; day++)
    printf("day %d: %d\n", day, availability[day]);

  return 0;
}
