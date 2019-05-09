#include <stdio.h>
int main()
{

    int a[3][3];
    int i, j, sum = 1,fck=1;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < 3; i++)
        sum *= a[i][i];
    for (i = 0; i < 3; i++)
        fck *= a[i][2 - i];
    sum+=fck;
    printf("%d", sum);
    return 0;
}