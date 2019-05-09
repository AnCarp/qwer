#include <stdio.h>
int main()
{
    int a[10], i, max;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 1, max = a[0]; i < 10; i++)
        max = max > a[i] ? max : a[i];
    printf("%d", max);
    return 0;
}
