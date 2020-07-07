#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NUM_PLANETS 9

int compare(char s[], char t[]);
int main(int argc, char *argv[])
{
  char *planets[] = {"MERCURY", "VENUS", "EARTH",
                     "MARS", "JUPITER", "SATURN",
                     "URANUS", "NEPTUNE", "PLUTO"};
  int i, j;
  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (compare(argv[i], planets[j])) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}
int compare(char s[], char t[])
{
    int i;
    for(i=0;toupper(s[i])==toupper(t[i]);i++)
        if (s[i]=='\0') return 1;
    return 0;
}
