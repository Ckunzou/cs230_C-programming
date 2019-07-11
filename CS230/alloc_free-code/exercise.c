#include <stdio.h>
#include <stdlib.h>

typedef struct Pair Pair;
struct Pair {
  int x;
  int y;
};

Pair *new_pair (int x, int y) {
  // TODO: use malloc to return a new Pair object.
  // REMEMBER: <type> *p = (<type>*) malloc(sizeof(<type>));
  Pair *result = (Pair *) malloc(sizeof(Pair));
  result->x = x;
  result->y = y;
  return result;
  //  return NULL;
}

void free_pair (Pair *p) {
  // TODO: use free to free the memory.
  // REMEMBER: free(<type>*);
  free(p);
}

int main() {
  Pair *p = new_pair(4, 5);
  printf("(%d, %d)\n", p->x, p->y);
  //free_pair(p);
  return 0;
}

// What if...
// (1) We compile this without providing the implementation?
// (2) What if we run it without an implementation?
// (3) What does valgrind say?
// (4) What does valgrind say after the implementation is provided?
// (5) What happens if we remove the free and compile/run?
// (6) What does valgrind say?
