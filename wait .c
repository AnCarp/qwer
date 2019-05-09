#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, n;
    int t[20], tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    //冒泡排序
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (t[j] > t[j + 1])
            {
                tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }
        }
    }
    for (i = 1, j = 0; i < n; i++)
    {
        j = j + t[i - 1] * (n - i);
    }
    printf("%d\n", j);
    return 0;
}