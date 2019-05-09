#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int i, j;
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            b[j][i] = a[i][j];
    printf("\nchange:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}