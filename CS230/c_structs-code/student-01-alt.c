#include <stdio.h>

struct StudentRecord {
  int id;
  double gpa;
  char name[25];
  char gender;
};

int main (int argc, char const *argv[]) {
  struct StudentRecord student1;
  printf("%d + %d + %d + %d = ",
         sizeof(student1.name),
         sizeof(student1.id),
         sizeof(student1.gender),
         sizeof(student1.gpa));
  printf("%d!!!!!\n", sizeof(student1));
  return 0;
}
