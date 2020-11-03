CC=gcc --std=c99 -g

all: test_deque

test_deque: test_deque.c deque.o dynarray.o
	$(CC) test_deque.c deque.o dynarray.o -o test_deque

deque.o: deque.c deque.h
	$(CC) -c deque.c

dynarray.o: dynarray.c dynarray.h
	$(CC) -c dynarray.c
