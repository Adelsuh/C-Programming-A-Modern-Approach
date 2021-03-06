#include <stdio.h>
#include "queue.h"

int main(void)
{
  Queue q1, q2;
  int n;

  q1 = create(100);
  q2 = create(200);

  push(q1, 1);
  push(q1, 2);

  n = pop(q1);
  printf("Popped %d from q1\n", n);
  push(q2, n);
  n = pop(q1);
  printf("Popped %d from q1\n", n);
  push(q2, n);

  destroy(q1);

  while (!is_empty(q2))
    printf("Popped %d from q2\n", pop(q2));

  push(q2, 3);
  make_empty(q2);
  if (is_empty(q2))
    printf("q2 is empty\n");
  else
    printf("q2 is not empty\n");

  destroy(q2);

  return 0;
}
