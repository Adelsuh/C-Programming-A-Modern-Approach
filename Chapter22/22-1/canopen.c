/* canopen.c (Chapter 22, page 547) */
/* Checks whether a file can be opened for reading */
/*Extended to allow any number of filenames to be entered and tested*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int i;

  for(i=1; i<argc; i++)
  {
    if ((fp = fopen(argv[i], "r")) == NULL)
    {
        printf("%s can't be opened\n", argv[i]);
        exit(EXIT_FAILURE);
    }
    printf("%s can be opened\n", argv[i]);
    fclose(fp);
  }

  return 0;
}
