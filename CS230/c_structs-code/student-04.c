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

  struct StudentRecord student2 = student1;

  printf("%s %d %c %1.2f\n",
	 student2.name,
	 student2.id,
	 student2.gender,
	 student2.gpa);

  return 0;
}
