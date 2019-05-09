#include <stdio.h>
int main()
{
    int a[8] = {1, 2, 3}, b[5] = {4, 5, 6, 7, 8};
    int i, j = 0, k;
    for (i = 3; j<5; i++)
    {
        a[i] = b[j];
        j = j + 1;
    }
    for (i = 0; i < 8; i++)
        printf("%d", a[i]);
    return 0;
}
         