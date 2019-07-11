CC = gcc
CFLAGS = --std=c99 -Wall -g

all: animals typedef enum union pointers int_stack_main array_stack

animals: animals.o
	$(CC) $(CFLAGS) animals.o -o animals

typedef: typedef.o
	$(CC) $(CFLAGS) typedef.o -o typedef

enum: enum.o
	$(CC) $(CFLAGS) enum.o -o enum

union: union.o
	$(CC) $(CFLAGS) union.o -o union

pointers: pointers.o
	$(CC) $(CFLAGS) pointers.o -o pointers

int_stack_main: int_stack_main.o int_stack.o
	$(CC) $(CFLAGS) int_stack_main.o int_stack.o -o int_stack_main

array_stack: array_stack.o
	$(CC) $(CFLAGS) array_stack.o -o array_stack

animals.o: animals.c
	$(CC) $(CFLAGS) -c animals.c

typedef.o: typedef.c
	$(CC) $(CFLAGS) -c typedef.c

enum.o: enum.c
	$(CC) $(CFLAGS) -c enum.c

union.o: union.c
	$(CC) $(CFLAGS) -c union.c

pointers.o: pointers.c
	$(CC) $(CFLAGS) -c pointers.c

array_stack.o: array_stack.c
	$(CC) $(CFLAGS) -c array_stack.c

int_stack.o: int_stack.c
	$(CC) $(CFLAGS) -c int_stack.c

int_stack_main.o: int_stack_main.c
	$(CC) $(CFLAGS) -c int_stack_main.c

clean:
	rm -f animals animals.o
	rm -f typedef typedef.o
	rm -f enum enum.o
	rm -f union union.o
	rm -f pointers pointers.o
	rm -f int_stack.o
	rm -f int_stack_main int_stack_main.o
	rm -f array_stack array_stack.o
