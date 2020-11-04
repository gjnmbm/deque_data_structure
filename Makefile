CC=gcc --std=c99 -g

all: test_deque

test_deque: test_deque.c deque.o
	$(CC) test_deque.c deque.o -o test_deque

deque.o: deque.c deque.h
	$(CC) -c deque.c

