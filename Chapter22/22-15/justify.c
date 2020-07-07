#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
  char word[MAX_WORD_LEN+2];
  int word_len;
  FILE *read_fp, *write_fp;

    if (argc!=3)
    {
        fprintf(stderr, "usage: justify read_file write_file\n");
        exit(EXIT_FAILURE);
    }

    if ((read_fp=fopen(argv[1], "r"))==NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((write_fp=fopen(argv[2], "w"))==NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

  clear_line();
  for (;;) {
    read_word(word, MAX_WORD_LEN+1, read_fp);
    word_len = strlen(word);
    if (word_len == 0) {
      flush_line(write_fp);
      return 0;
    }
    if (word_len > MAX_WORD_LEN)
      word[MAX_WORD_LEN] = '*';
    if (word_len + 1 > space_remaining()) {
      write_line(write_fp);
      clear_line();
    }
    add_word(word);
  }
}
