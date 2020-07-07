#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node
{
  Item data;
  struct node *next;
};

struct queue_type
{
    struct node *start;
    struct node *end;
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
  q->start = NULL;
  q->end = NULL;
  return q;
}

void destroy(Queue q)
{
    make_empty(q);
    free(q);
}

void make_empty(Queue q)
{
    while (!is_empty(q))
    pop(q);
}

int is_empty(Queue q)
{
    return q->start==NULL;
}

int is_full(Queue q)
{
    return 0;
}

void push(Queue q, Item i)
{
    struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL)
    terminate("Error in push: stack is full.");
  if (q->start==NULL) q->start=new_node;
  new_node->data = i;
  new_node->next = q->end;
  q->end = new_node;
}

Item pop(Queue q)
{
    struct node *old_start = malloc(sizeof(struct node));
  Item i;

  if (is_empty(q))
    terminate("Error in pop: stack is empty.");

  old_start = q->start;
  i = old_start->data;
  q->start = old_start->next;
  free(old_start);
  return i;
}

//Isn't working, can't tell why
