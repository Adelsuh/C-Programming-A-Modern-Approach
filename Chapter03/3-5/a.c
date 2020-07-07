#include<stdio.h>
int main(void)
{
    int I, II, III, IV, V, VI, VII, IIX, IX, X, XI, XII, XIII, XIV, XV, XVI;
    printf("Enter the numbers from 1 to 16 in any order(with a space between each one)\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &I, &II, &III, &IV, &V, &VI, &VII, &IIX, &IX, &X, &XI, &XII, &XIII, &XIV, &XV, &XVI);
    printf("%2d\t%2d\t%2d\t%2d\t\n%2d\t%2d\t%2d\t%2d\t\n%2d\t%2d\t%2d\t%2d\t\n%2d\t%2d\t%2d\t%2d\t\n", I, II, III, IV, V, VI, VII, IIX, IX, X, XI, XII, XIII, XIV, XV, XVI);
    printf("Row sums: %d %d %d %d\n", I+II+III+IV, V+VI+VII+IIX, IX+X+XI+XII, XIII+XIV+XV+XVI);
    printf("Column sums: %d %d %d %d\n", I+V+IX+XIII, II+VI+X+XIV, III+VII+XI+XV, IV+IIX+XII+XVI);
    printf("Diagonal sums: %d %d\n", I+VI+XI+XVI, IV+VII+X+XIII);
    return 0;
}
