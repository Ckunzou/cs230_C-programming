#include <stdio.h>

struct StudentRecord {
  char name[25];
  int id;
  char gender;
  double gpa;
};

int main (int argc, char const *argv[]) {
  struct StudentRecord student1 = {
    .id     = 1234567,
    .gpa    = 3.95,
    .gender = 'M',
    .name   = "Harry Potter"
  };

  printf("%s %d %c %1.2f\n",
	 student1.name,
	 student1.id,
	 student1.gender,
	 student1.gpa);

  return 0;
}
