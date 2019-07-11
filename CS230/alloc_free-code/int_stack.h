#ifndef __STACK_H
#define __STACK_H

typedef struct StackNodeInt StackNodeInt;
struct StackNodeInt {
  int value;
  StackNodeInt *next;
};

typedef struct StackInt StackInt;
struct StackInt {
  int size;
  StackNodeInt *top;
};

StackInt *stack_new ();
void stack_free (StackInt *stack);

void stack_push (StackInt *stack, int value);
int stack_pop (StackInt *stack);
int stack_size (StackInt *stack);
void stack_print (StackInt *stack);

#endif
