#ifndef STACKADT_H_INCLUDED
#define STACKADT_H_INCLUDED

typedef struct stack_type *Stack;

void push(Stack s, char i);
void pop(Stack s);
int check_nested(Stack s);
Stack create(void);
static void terminate(const char *message);

#endif // STACKADT_H_INCLUDED
