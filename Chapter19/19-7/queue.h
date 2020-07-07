#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef int Item;

typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue q);
void make_empty(Queue q);
int is_empty(Queue q);
int is_full(Queue q);
void push(Queue q, Item i);
Item pop(Queue q);

#endif // QUEUE_H_INCLUDED
