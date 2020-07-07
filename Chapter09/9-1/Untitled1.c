#include<stdio.h>
void selection_sort(int n, int a[n]);
int main(void)
{
    #define N 10
    int i, a[N]={0};
    printf("Enter %d integers: ", N);
    for(i=0;i<N;i++) scanf("%d", &a[i]);
    selection_sort(N, a);
    printf("In sorted order: ");
    for(i=0;i<N;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
void selection_sort(int n, int a[n])
{
    int i=n-1, high=a[0], j=0, temp;
    if (n==1) return;
    for(;i>0;i--) if (high<a[i]) {high=a[i]; j=i;}
    temp=a[n-1]; a[n-1]=high; a[j]=temp;
    selection_sort(n-1, a);
}
//unfinished
