#include <stdio.h>
#include "stackADT.h"

int main(void)
{
  Stack s1, s2;
  int n;

  s1 = create();
  s2 = create();

  push(s1, 1);
  printf("s1 now has %d members\n", length(s1));
  push(s1, 2);
  printf("s1 now has %d members\n", length(s1));

  n = pop(s1);
  printf("Popped %d from s1, and now s1 has %d members\n", n, length(s1));
  push(s2, n);
  printf("s2 now has %d members\n", length(s2));
  n = pop(s1);
  printf("Popped %d from s1, and now s1 has %d members\n", n, length(s1));
  push(s2, n);
  printf("s2 now has %d members\n", length(s2));

  destroy(s1);

  while (!is_empty(s2))
    {printf("Popped %d from s2, ", pop(s2));
    printf("and now s2 has %d members\n", length(s2));}

  push(s2, 3);
  printf("s2 now has %d members\n", length(s2));
  make_empty(s2);
  if (is_empty(s2))
    printf("s2 is empty\n");
  else
    printf("s2 is not empty\n");

  destroy(s2);

  return 0;
}
