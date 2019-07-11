#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define START_SIZE 10

int *stack = NULL;
int  top   = 0;
int  size  = START_SIZE;

void init(int *stack, int size) {
  for (int i = 0; i < size; i++) {
    stack[i] = 0;
  }  
}

void stack_new() {
  stack = (int*) malloc(START_SIZE * sizeof(int));
  init(stack, START_SIZE);
  top = 0;
}

void reallocate() {
  if (top >= size) {
    int *old_stack = stack;
    int  new_size  = size*2;
    int *stack = (int*) malloc(new_size * sizeof(int));
    init(stack, new_size);
    memcpy(stack, old_stack, size);
    size = new_size;
    printf("reallocated to %d\n", size);
  }
}

void push(int value) {
  reallocate();
  stack[top] = value;
  top += 1;  
}

int pop() {
  int value = stack[top];
  top -= 1;
  return value;
}

void print() {
  for (int i = 0; i < top; i++) {
    printf("%d", stack[i]);
    if (i+1 < top)
      printf(", ");
  }
  printf("\n");
}

int main() {
  stack_new();
  for (int i = 0; i < 30; i++) {
    push(i);
    print();
  }

  for (int i = 0; i < 30; i++) {
    int v = pop();
    print();
  }
  
  printf("size = %d\n", size);
}
