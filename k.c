#include <stdio.h>
#include <stdlib.h>
int num[1000], len;
int exchange(int k, int n)
{
    len=0;
    for (int i = 0; n; i++)
    {
        num[i] = n % k;
        n /= k;
        len++;
    }
}
int main()
{
    int k, n;
    while (1)
    {
        scanf("%d", &k);
        printf("%d\n", n = rand() % 500 + 1);
        exchange(k, n);
        for (int i = len - 1; i > -1; i--)
            printf("%d", num[i]);
        printf("\n");
        //system("PAUSE");
    }
    return 0;
}
