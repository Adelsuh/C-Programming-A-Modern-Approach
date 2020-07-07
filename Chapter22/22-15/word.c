#include <stdio.h>
#include "word.h"

int read_char(FILE *read_file)
{
  int ch = getc(read_file);

  if (ch == '\n' || ch == '\t')
    return ' ';
  return ch;
}

void read_word(char *word, int len, FILE *read_file)
{
  int ch, pos = 0;

  while ((ch = read_char(read_file)) == ' ')
    ;
  while (ch != ' ' && ch != EOF) {
    if (pos < len)
      word[pos++] = ch;
    ch = read_char(read_file);
  }
  word[pos] = '\0';
}
