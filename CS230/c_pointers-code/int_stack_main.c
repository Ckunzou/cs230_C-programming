#include <stdio.h>
#include "int_stack.h"

int main() {
  StackInt *stack = stack_new();

  for (int i = 0; i < 10; i++) {
    stack_push(stack, i);
  }

  printf("stack size = %d\n", stack_size(stack));
  stack_print(stack);

  for (int i = 0; i < 5; i++) {
    int v = stack_pop(stack);
    printf("popped %d\n", v);
  }

  printf("stack size = %d\n", stack_size(stack));
  stack_print(stack);  

  stack_free(stack);
}

/*
  Here are some things to think about:
  
  (1) What if we commented out the stack_free(stack)?
      (a) Does the program still work?
      (b) What does valgrind say?
  (2) What if we tried to manipulate a stack that was
      never allocated? Try it - replace stack_new() with NULL;
      (a) What if we commented out the assert statements in stack.c?
      (b) What if we ran it with valgrind?
 */
