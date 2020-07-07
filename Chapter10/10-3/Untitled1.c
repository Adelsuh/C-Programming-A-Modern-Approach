#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
char hand[5][2]={{0}};
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(void)
{
  char ch, rank_ch, suit_ch;
  bool bad_card, duplicate;
  int cards_read = 0, i;

  while (cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    suit_ch = getchar();
    switch (rank_ch) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':case 't': case 'T':case 'j': case 'J': case 'q': case 'Q': case 'k': case 'K': case 'a': case 'A': break;
      default:   bad_card = true; break;
    }
    switch (suit_ch) {
      case 'c': case 'C':case 'd': case 'D':case 'h': case 'H':case 's': case 'S': break;
      default: bad_card = true; break;
    }
    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    for(i=1, duplicate=0;cards_read>=i;i++)
        {if ((rank_ch==hand[cards_read-i][0])&&(suit_ch==hand[cards_read-i][1])) duplicate=1;}

    if (bad_card)
      printf("Bad card; ignored.\n");
    else if (duplicate)
      printf("Duplicate card; ignored.\n");
    else {
      hand[cards_read][0]=rank_ch;
      hand[cards_read][1]=suit_ch;
      cards_read++;
    }
  }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
  int num_consec = 0;
  int card, i, j, check=0;
  char smallest;

  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;

  /* check for flush */
    for(card=1;card<NUM_CARDS;card++)
        {if(hand[card-1][1]==hand[card][1]) check++;}
    if (check==4) flush = true;

  /* check for straight */
  for(i=0;i<NUM_CARDS;i++)
  {switch(hand[i][0])
    {
        case 't': case 'T': hand[i][0]=10; break;
        case 'j': case 'J': hand[i][0]=11; break;
        case 'q': case 'Q': hand[i][0]=12; break;
        case 'k': case 'K': hand[i][0]=13; break;
        case 'a': case 'A': hand[i][0]=14; break;
        default: break;
    }
  }
  smallest=hand[0][0];
  for(i=1;i<NUM_CARDS;i++){if(smallest>hand[i][0]) smallest=hand[i][0];}
  for(i=1;i<NUM_CARDS;i++){for(j=0;j<NUM_CARDS;j++) {if(hand[j][0]==smallest+i) {num_consec++; goto done;}}done: ;}
  if (num_consec == NUM_CARDS-1) {
    straight = true;
    return;
  }

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
  for (i= 2; i < NUM_RANKS+2; i++) {
    for(check=0, j=0;j<NUM_CARDS;j++){if (hand[j][0]==i) check++;}
    if (check == 4) four = true;
    if (check == 3) three = true;
    if (check == 2) pairs++;
  }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
  if (straight && flush) printf("Straight flush");
  else if (four)         printf("Four of a kind");
  else if (three &&
           pairs == 1)   printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}
