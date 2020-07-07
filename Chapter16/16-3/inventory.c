#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    };
int find_part(int number, int parts, struct part p[MAX_PARTS]);
void insert(int *parts, struct part p[MAX_PARTS]);
void search(int parts, struct part p[MAX_PARTS]);
void update(int parts, struct part p[MAX_PARTS]);
void print(int parts, struct part p[MAX_PARTS]);

int main(void)
{
  struct part inventory[MAX_PARTS];

  int num_parts = 0;   /* number of parts currently stored */

  char code;

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'i': insert(&num_parts, inventory);
                break;
      case 's': search(num_parts, inventory);
                break;
      case 'u': update(num_parts, inventory);
                break;
      case 'p': print(num_parts, inventory);
                break;
      case 'q': return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

int find_part(int number, int parts, struct part p[MAX_PARTS])
{
  int i;

  for (i = 0; i < parts; i++)
    if (p[i].number == number)
      return i;
  return -1;
}

void insert(int *parts, struct part p[MAX_PARTS])
{
  int part_number;

  if (*parts == MAX_PARTS) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number, *parts, p) >= 0) {
    printf("Part already exists.\n");
    return;
  }

  p[*parts].number = part_number;
  printf("Enter part name: ");
  read_line(p[*parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &p[*parts].on_hand);
  *parts+=1;
}

void search(int parts, struct part p[MAX_PARTS])
{
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number, parts, p);
  if (i >= 0) {
    printf("Part name: %s\n", p[i].name);
    printf("Quantity on hand: %d\n", p[i].on_hand);
  } else
    printf("Part not found.\n");
}

void update(int parts, struct part p[MAX_PARTS])
{
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number, parts, p);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    p[i].on_hand += change;
  } else
    printf("Part not found.\n");
}

void print(int parts, struct part p[MAX_PARTS])
{
  int i;

  printf("Part Number   Part Name                  "
         "Quantity on Hand\n");
  for (i = 0; i < parts; i++)
    printf("%7d       %-25s%11d\n", p[i].number,
           p[i].name, p[i].on_hand);
}
