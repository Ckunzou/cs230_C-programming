CC = gcc
CFLAGS = --std=c99 -Wall -g

all: student-01 student-01-alt student-02 student-03 student-04 \
student-05 student-05-fix student-06 typedef enum union

student-01: student-01.o
	$(CC) $(CFLAGS) student-01.o -o student-01

student-01-alt: student-01-alt.o
	$(CC) $(CFLAGS) student-01-alt.o -o student-01-alt

student-02: student-02.o
	$(CC) $(CFLAGS) student-02.o -o student-02

student-03: student-03.o
	$(CC) $(CFLAGS) student-03.o -o student-03

student-04: student-04.o
	$(CC) $(CFLAGS) student-04.o -o student-04

student-05: student-05.o
	$(CC) $(CFLAGS) student-05.o -o student-05

student-05-fix: student-05-fix.o
	$(CC) $(CFLAGS) student-05-fix.o -o student-05-fix

student-06: student-06.o
	$(CC) $(CFLAGS) student-06.o -o student-06

student-01.o: student-01.c
	$(CC) $(CFLAGS) -c student-01.c

student-01-alt.o: student-01-alt.c
	$(CC) $(CFLAGS) -c student-01-alt.c

student-02.o: student-02.c
	$(CC) $(CFLAGS) -c student-02.c

student-03.o: student-03.c
	$(CC) $(CFLAGS) -c student-03.c

student-04.o: student-04.c
	$(CC) $(CFLAGS) -c student-04.c

student-05.o: student-05.c
	$(CC) $(CFLAGS) -c student-05.c

student-05-fix.o: student-05-fix.c
	$(CC) $(CFLAGS) -c student-05-fix.c

student-06.o: student-06.c
	$(CC) $(CFLAGS) -c student-06.c


clean:
	rm -f student-01 student-01.o
	rm -f student-01-alt student-01-alt.o
	rm -f student-02 student-02.o
	rm -f student-03 student-03.o
	rm -f student-04 student-04.o
	rm -f student-05 student-05.o
	rm -f student-05-fix student-05-fix.o
	rm -f student-06 student-06.o
