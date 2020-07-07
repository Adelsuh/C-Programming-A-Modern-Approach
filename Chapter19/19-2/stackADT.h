#ifndef STACKADT_H_INCLUDED
#define STACKADT_H_INCLUDED

typedef struct stack_type *Stack;

void push(Stack s, int i);
int pop(Stack s);
Stack create(void);

#endif // STACKADT_H_INCLUDED
