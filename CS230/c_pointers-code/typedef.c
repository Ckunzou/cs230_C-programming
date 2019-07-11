#include <stdio.h>

typedef int color;
typedef char gender;

typedef struct StudentRecord StudentRecord;
struct StudentRecord {
  char name[25];
  int id;
  char gender;
  double gpa;
};

void printColor(color c) {
  printf("%d\n", c);
}

void printGender(gender g) {
  printf("%c\n", g);
}

#define RED  1
#define BLUE 2

#define MALE   'M'
#define FEMALE 'F'

int main (int argc, char const *argv[]) {
  color  c = BLUE;
  gender g = FEMALE;
  printColor(c);
  printGender(g);

  StudentRecord student1 = {
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
