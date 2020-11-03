
#include <stdlib.h>
#include <assert.h>
#include "deque.h"

struct deque {
	struct link* front_link;
	struct link* back_link;
};

struct link {
	struct link* next;
	void* val;
};
