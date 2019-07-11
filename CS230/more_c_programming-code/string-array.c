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

int main() {
  int availability[TOTDAYS] = { 
    AVAIL, NOTAVAIL, NOTAVAIL, AVAIL,
    NOTAVAIL, AVAIL, NOTAVAIL
  };

  char *names[TOTDAYS] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
  };

  char *avail_str[2] = {
    "not available",
    "available"
  };

  printf("availability:\n");
  for (int day = SUNDAY; day <= SATURDAY; day++) {
    printf("%-10s: %s\n", names[day], avail_str[availability[day]]);
    // what %10s do?  %s ?  %7s ?
  }

  return 0;
}
