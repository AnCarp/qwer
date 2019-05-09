#include <stdio.h>
int main()
{
    int m, n, i, s = 0;
    scanf("%d%d", &m, &n);
    if (m % 2 == 0)
        i = m + 1;
    else
        i = m + 2;
    for (; i < n; i += 2)
        s += i;
    printf("%d", s);
    return 0;
}
