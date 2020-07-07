#include<stdio.h>
#define MAX_DIGITS 10
int seg[10][7]={{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1},
{1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1},
{1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1},
{1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};
char digits[3][MAX_DIGITS*4];
void clear_digits(void);
void process_digit(int digit, int position);
void print_digits(void);

int main(void)
{
    char check;
    int digit, position=0;
    clear_digits();
    printf("Enter a number: ");
    for(;;)
    {
        L: if (position==MAX_DIGITS) break;
        check=getchar();
        if (check=='\n') break;
        switch(check)
        {
            case '0': digit=0; break;
            case '1': digit=1; break;
            case '2': digit=2; break;
            case '3': digit=3; break;
            case '4': digit=4; break;
            case '5': digit=5; break;
            case '6': digit=6; break;
            case '7': digit=7; break;
            case '8': digit=8; break;
            case '9': digit=9; break;
            default: goto L;
        }
        process_digit(digit, position);
        position++;
    }
    print_digits();
    return 0;
}

void clear_digits(void)
{
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<MAX_DIGITS*4;j++){
            digits[i][j]=' ';
        }
    }
}

void process_digit(int digit, int position)
{
    int start=4*position;
    if (seg[digit][0]) digits[0][start+1]='_';
    if (seg[digit][1]) digits[1][start+2]='|';
    if (seg[digit][2]) digits[2][start+2]='|';
    if (seg[digit][3]) digits[2][start+1]='_';
    if (seg[digit][4]) digits[2][start]='|';
    if (seg[digit][5]) digits[1][start]='|';
    if (seg[digit][6]) digits[1][start+1]='_';
}

void print_digits(void)
{
     int i, j;
     for(i=0;i<3;i++){
        for(j=0;j<MAX_DIGITS*4;j++){
            printf("%c", digits[i][j]);}
        printf("\n");
    }
}
