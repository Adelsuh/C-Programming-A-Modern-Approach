#include<stdio.h>
int main(void)
{
    int tens, ones;
    char *ten[10]={"ten.", "eleven.", "twelve.", "thirteen.", "fourteen.", "fifteen.", "sixteen.", "seventeen."
    "eighteen.", "nineteen."};
    char *more_tens[8]={"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *one[10]={".", "-one", "-two.", "-three.", "-four.", "-five.", "-six.", "-seven.", "-eight.", "-nine."};
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &ones);
    printf("You entered the number ");
    if (tens==1)
        printf("%s", ten[ones]);
    else printf("%s%s", more_tens[tens-2], one[ones]);
    return 0;
}
