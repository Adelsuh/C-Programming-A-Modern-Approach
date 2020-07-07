#include<stdio.h>
int main(void)
{
    int grade, tens;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    if (grade<0||grade>100) {printf("Illegal grade"); return 0;}
    tens=grade/10;
    switch (tens)
    {
        case 9: case 10: printf("Letter grade: A"); break;
        case 8: printf("Letter grade: B"); break;
        case 7: printf("Letter grade: C"); break;
        case 6: printf("Letter grade: D"); break;
        default: printf("Letter grade: F");
    }
    return 0;
}
