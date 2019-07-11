#include <stdio.h>
#include <string.h>

struct StudentRecord {
  char name[25];
  int id;
  char gender;
  double gpa;
};

struct StudentRecord  MakeStudentRecord(char name[25], 
					int id, 
					char gender, 
					double gpa) {
  struct StudentRecord student;
  strncpy(student.name, name, 25);
  student.id     = id;
  student.gender = gender;
  student.gpa    = gpa;

  return student;
}

/**
 * Functions are call-by-value. So, this does
 * not change a thing! But, what about arrays?
 */
void updateGender(struct StudentRecord record) {
  record.gender = 'M';
}

/**
 * What just happened in this function? I thought C functions were
 * call-by-value? How can this be?
 *
 * Turns out that arrays in C appear to be call-by-reference. In fact,
 * they are not - but, we will reveal the secret when we talk about
 * pointers!
 *
 */
void updateName(char name[25]) {
  strncpy(name, "Ron Weasley", 25);
}

int main (int argc, char const *argv[]) {
  struct StudentRecord student = MakeStudentRecord("Harry Potter",
						   1234567, 'M',
						   3.95);
  printf("%s %d %c %1.2f\n",
	 student.name,
	 student.id,
	 student.gender,
	 student.gpa);

  updateGender(student);

  printf("%s %d %c %1.2f\n",
	 student.name,
	 student.id,
	 student.gender,
	 student.gpa);

  updateName(student.name);

  printf("%s %d %c %1.2f\n",
	 student.name,
	 student.id,
	 student.gender,
	 student.gpa);

  return 0;
}
