#include <stdio.h>

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

  char str_avail[] = "availability";
  char str_day[]   = "day";

  printf("%s:\n", str_avail);
  for (int day = SUNDAY; day <= SATURDAY; day++) {
    printf("%s %d: %d\n", str_day, day, availability[day]);
  }
  return 0;
}
