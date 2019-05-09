#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        a = a;
    else
    {
        d = a;
        a = b;
        b = d;
    }
    if (a > c)
        a = a;
    else
    {
        d = a;

        a = c;
        c = d;
    }
    if (b > c)
        b = b;
    else
    {
        d = c;
        c = b;
        b = d;
    }
    printf("%d%d%d", a, b, c);
    return 0;
}