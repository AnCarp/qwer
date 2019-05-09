#include <stdio.h>
int main()
{
    void fck(int (*a)[3]);
    int a[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    fck(a);
        return 0;
    }
}
void fck(int (*a)[3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%-2d", a[j][i]);
        putchar('\n');
    }
}
