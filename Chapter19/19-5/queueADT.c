#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define QUEUE_LEN 100

struct queue_type
{
    Item contents[QUEUE_LEN];
    int start;
    int end;
};

static void terminate(const char *message)
{
  printf("%s\n", message);
  return;
}

Queue create(void)
{
  Queue q = malloc(sizeof(struct queue_type));
  if (q == NULL)
    terminate("Error in create: stack could not be created.");
  q->start = 0;
  q->end = 0;
  return q;
}

void destroy(Queue q)
{
    free(q);
}

void make_empty(Queue q)
{
    q->start=0;
    q->end=0;
}

int is_empty(Queue q)
{
    return q->end==q->start;
}

int is_full(Queue q)
{
    return (q->end)-(q->start)+1==QUEUE_LEN;
}

void push(Queue q, Item i)
{
    if (is_full(q))
    terminate("Error in push: stack is full.");
    q->contents[q->end++] = i;
}

Item pop(Queue q)
{
    if (is_empty(q))
    terminate("Error in pop: stack is empty.");
    return q->contents[q->start++];
}
