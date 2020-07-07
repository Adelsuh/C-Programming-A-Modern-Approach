#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int nonblank_seen = 0, ch;

  while ((ch = getchar()) != EOF) {
    if (nonblank_seen)
      putchar(ch);
    else if (!isspace(ch)) {
      nonblank_seen = 1;
      putchar(ch);
    }
    if (ch == '\n')
      nonblank_seen = 0;
  }

  return 0;
}
