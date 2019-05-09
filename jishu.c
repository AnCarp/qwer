#include <stdio.h>
int main()
{
    int m, n, i, s = 0, j;
    scanf("%d%d", &m, &n);
    if (m % 2 != 0)
        for (i = 0, j = m; i < ((n - m - 1) / 2); i++)
        {

            j = j + 2;
            s = s + j;
        }
    if (m % 2 == 0)
    for (i = 0, j = m+1; i < ((n - m - 1) / 2); i++)
    {

        j = j + 2;
        s = s + j;
        
    }
    printf("%d", s);
    return 0;
}