/*
 * This file contains executable code to test the functionality
 * of the deque. 
 *
 * By Kristina Mason
*/

#include <stdlib.h>
#include <stdio.h>

#include "deque.h"

int main(int argc, char** argv) {
	struct deque* dq;
	int test_arr[10];
	for (int i = 0; i < 10; i++) {
		test_arr[i] = i;
	}
	printf("Pushing 5 elements to front of queue...\n");
	printf("Pushing 5 elements to back of queue...\n");
	printf("Popping first 3 elements from front...\n");
	printf("Popping last 3 elements from back...\n");
	printf("Popping the rest of the elements...\n");
	printf("Is deque empty? (Expecting 1)", deque_is_empty(dq));
	return 0;
}
