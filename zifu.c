#include <stdio.h>
int main()
{
    int i, j, k;
    char c;
    scanf("%c\n", &c);
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 0; j < i; j++)
            printf("%c", c);
        printf("\n");
    }
    return 0;
}