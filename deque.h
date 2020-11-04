#ifndef DEQUE_H
#define DEQUE_H
struct deque;
struct link;

struct deque* deque_create();
void deque_free(struct deque* dq);
void deque_push_front(struct deque* dq, void* item);
void deque_push_last(struct deque* dq, void* item);
void deque_pop_front(struct deque* dq);
void last(struct deque* dq);
void* deque_peek_front(struct deque* dq);
void* deque_peek_rear(struct deque* dq);
int deque_is_empty(struct deque* dq);
//Can add is_full method, but might be useless if it can resize itself
//A person could define what it means for a deque to be full though

#endif
