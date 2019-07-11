CC = gcc
CFLAGS = --std=c99 -Wall -g

all: allocate int_stack_main array_stack exercise

exercise: exercise.c
	$(CC) $(CFLAGS) exercise.c -o exercise

allocate: allocate.o
	$(CC) $(CFLAGS) allocate.o -o allocate

int_stack_main: int_stack_main.o int_stack.o
	$(CC) $(CFLAGS) int_stack_main.o int_stack.o -o int_stack_main

array_stack: array_stack.o
	$(CC) $(CFLAGS) array_stack.o -o array_stack

array_stack.o: array_stack.c
	$(CC) $(CFLAGS) -c array_stack.c

int_stack.o: int_stack.c int_stack.h
	$(CC) $(CFLAGS) -c int_stack.c

int_stack_main.o: int_stack_main.c int_stack.h
	$(CC) $(CFLAGS) -c int_stack_main.c

allocate.o: allocate.c
	$(CC) $(CFLAGS) -c allocate.c

clean:
	rm -f int_stack.o
	rm -f int_stack_main int_stack_main.o
	rm -f array_stack array_stack.o
	rm -f allocate.o allocate
	rm -f exercise
