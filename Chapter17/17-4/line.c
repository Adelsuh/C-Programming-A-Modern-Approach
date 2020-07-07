#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20

struct line_list {
    char msg[MAX_WORD_LEN];
    struct line_list *next;
};

struct line_list *first=NULL;
struct line_list *print_first=NULL;
int line_len = 0;
int num_words = 0;

void reverse_order (void)
{
    struct line_list *cur;
    for(cur=first;cur->next!=NULL;cur=cur->next)
    {
        struct line_list *new_word;
        new_word=malloc(sizeof(struct line_list));
        strcpy(new_word->msg, cur->msg);
        new_word->next=print_first;
        print_first=new_word;
    }
}

/* wjseo : LINE LIST node를 맨 마지막에 넣는 코드 */
void add_line_list(struct line_list *new_node)
{
	if (first == NULL)
	{
		first = new_node;
	}
	else
	{
		struct line_list *last;
		last = first;
		while (last->next)
			last = last->next;

		last->next = new_node;
	}
}

void clear_line(void)
{
    struct line_list *cur = first, *prev;
    while (cur != NULL) {
        prev = cur;
        cur = cur->next;
        free(prev);
    }
    first=NULL;
    print_first = NULL;
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
  struct line_list *new_word;
  new_word=malloc(sizeof(struct line_list));
  memset(new_word, 0, sizeof(struct line_list));
  strcpy(new_word->msg, word);
  line_len += strlen(word);
  num_words++;
#if 0
  new_word->next=first;
  first=new_word;
#else
	new_word->next = NULL;
	add_line_list(new_word);
#endif
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  struct line_list *cur;
  if (print_first == NULL) print_first = first;

  for (cur=print_first; cur!=NULL; cur=cur->next) {
      putchar(' ');
      num_words--;

    }
  putchar('\n');
}

void flush_line(void)
{
  struct line_list *cur;
  if (line_len > 0)
    if (print_first == NULL) print_first = first;
    for (cur=print_first; cur!=NULL; cur=cur->next) {
      printf("%s ", cur->msg);
    }
  putchar('\n');
}

