#ifndef
#define
struct deque;

void deque_insert_front(struct deque*, void* item);
void deque_insert_last(struct deque*, void* item);
void deque_delete_front(struct deque* dq);
void deque_delete_last(struct deque* dq);
void* deque_get_front(struct deque* dq);
void* deque_get_rear(struct deque* dq);
int deque_is_empty(struct deque* dq);
//Can add is_full method, but might be useless if it can resize itself

#endif
