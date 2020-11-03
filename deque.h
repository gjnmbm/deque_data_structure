#ifndef DEQUE_H
#define DEQUE_H
struct deque;
struct link;

struct deque* deque_create();
void deque_free(struct deque* dq);
void deque_insert_front(struct deque* dq, void* item);
void deque_insert_last(struct deque* dq, void* item);
void deque_delete_front(struct deque* dq);
void deque_delete_last(struct deque* dq);
void* deque_get_front(struct deque* dq);
void* deque_get_rear(struct deque* dq);
int deque_is_empty(struct deque* dq);
//Can add is_full method, but might be useless if it can resize itself
//A person could define what it means for a deque to be full though

#endif
