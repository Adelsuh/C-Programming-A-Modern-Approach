#include<stdio.h>
int main(void)
{
    float n, m;
    char sign;
    printf("Enter an expression: ");
    scanf("%f", &n);
    for(;;) {
        sign=getchar();
        if (sign=='\n') break;
        scanf("%f", &m);
        switch (sign)
        {
            case '+': n=n+m; break;
            case '-': n=n-m; break;
            case '*': n=n*m; break;
            case '/': n=n/m; break;
        }
    }
    printf("Value of expression: %f", n);
    return 0;
}
