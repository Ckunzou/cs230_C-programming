#include <stdio.h>
#include <stdlib.h>  // malloc/free
#include <assert.h>
#include "int_stack.h"

static StackNodeInt *node_new() {
  StackNodeInt *n = (StackNodeInt*) malloc(sizeof(StackNodeInt));
  n->value = -1;
  n->next  = NULL;
  return n;
}

static void node_free(StackNodeInt *n) {
  assert(n != NULL);
  free(n);
}

StackInt *stack_new() {
  StackInt *s = (StackInt*) malloc(sizeof(StackInt));
  s->size = 0;
  s->top  = NULL;
  return s;
}

static void stack_free_all(StackNodeInt *n) {
  if (n != NULL) {
    stack_free_all(n->next);
    node_free(n);
  }
}

void stack_free(StackInt *stack) {
  assert(stack != NULL);
  stack_free_all(stack->top);
  free(stack);
}

void stack_push(StackInt *stack, int value) {
  assert(stack != NULL);
  StackNodeInt *n = node_new();
  n->value = value;
  
  if (stack->size == 0) {
    stack->top = n;
  } else {
    n->next = stack->top;
    stack->top = n;
  }

  stack->size++;
}

int stack_pop(StackInt *stack) {
  assert(stack != NULL);
  StackNodeInt *top  = stack->top;
  stack->top = stack->top->next;
  int value = top->value;
  node_free(top);
  return value;
}

int stack_size(StackInt *stack) {
  assert(stack != NULL);
  return stack->size;
}

void stack_print(StackInt *stack) {
  assert(stack != NULL);
  for (StackNodeInt *n = stack->top; n != NULL; n = n->next) {
    printf("%d", n->value);
    if (n->next != NULL)
      printf(", ");
  }
  printf("\n");
}
