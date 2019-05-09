#include <stdio.h>
int main()
{
    int a, b, s = 0, j;
    scanf("%d%d", &a, &b);
    if (a % 5 == 0)
        j = a + 5;
    else
        j = a + 5 - a % 5;
    for (; j < b; j += 5)
        printf("%d", j);

    return 0;
}
