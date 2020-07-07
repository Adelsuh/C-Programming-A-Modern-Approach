/* xor.c (Chapter 20, page 515) */
/* Performs XOR encryption */

/*
#include <ctype.h>
#include <stdio.h>

#define KEY '&'

int main(void)
{
  int orig_char, new_char;

  while ((orig_char = getchar()) != EOF) {
    new_char = orig_char ^ KEY;
    if (isprint(orig_char) && isprint(new_char))
      putchar(new_char);
    else
      putchar(orig_char);
  }

  return 0;
}
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
    FILE *original_fp, *encrypted_fp;
    char ch;

    if(argc!=3)
    {
        fprintf(stderr, "usage: xor original encrypted\n");
        exit(EXIT_FAILURE);
    }

    if((original_fp=fopen(argv[1], "rb"))==NULL)
    {
        fprintf(stderr, "Cannot open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((encrypted_fp=fopen(argv[2], "wb"))==NULL)
    {
        fprintf(stderr, "Cannot open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(original_fp))!=EOF)
                putc(ch ^ KEY, encrypted_fp);

    fclose(original_fp);
    fclose(encrypted_fp);

    return 0;
}
