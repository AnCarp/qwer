#include <stdio.h>
int main()
{
    int i, j, n, k;
    char c;
    scanf("%d %c", &k,&c);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k - i; j++)
            printf(" ");
        for (n = 1; n <= 2 * i - 1; n++)
            printf("%c",c);
        printf("\n");
    }
    for (i =1; i <=k-1; i++)
    {
        for (j =1; j<=i; j++)
            printf(" ");
        for (n = 1; n <= 2 * (k-i)- 1; n++)
            printf("%c",c);
        printf("\n");
    }
    return 0;
}