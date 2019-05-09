#include <stdio.h>
int main()
{
    int a[10], i;
    int fck(int a[100]);
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    fck(a);
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
int fck(int a[10])
{
    int j, t;

    for (j = 0; j < 5; j++)

    {
        t = a[9 - j];
        a[9 - j] = a[j];
        a[j] = t;
    }
    return 0;
}