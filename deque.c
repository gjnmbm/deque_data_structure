
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

struct deque* deque_create() {
	struct deque* dq = malloc(sizeof(struct deque));
	dq->front_link = NULL;
	dq->back_link = NULL;
	return dq;
}

void deque_free(struct deque* dq) {
	free(dq);
}

void deque_push_front(struct deque* dq, void* item) {
	
}
