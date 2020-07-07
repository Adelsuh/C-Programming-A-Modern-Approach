#include<stdio.h>
int main(void)
{
    int l=0, ll, w;
    char ch='a';
    printf("Enter a sentence: ");
    for(w=0;ch!='\n';++w)
    {
        for(ll=0;;++ll)
        {
            ch=getchar();
            if (ch==' '||ch=='\n') break;

        }
        l+=ll;
    }
    printf("Average word length: %.1f", ((float) l)/w);
    return 0;
}
