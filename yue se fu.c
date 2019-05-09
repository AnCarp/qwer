#include <stdio.h>
#define N 1000
int main()
{
    int Joseph(int, int);
    int m, n;
    int leftPeople;
    scanf("%d%d", &m, &n);
    leftPeople = Joseph(m, n);
    printf("NO.%d", leftPeople);
    return 0;
}
int Joseph(int total, int keyNum)
{
    int left = total;
    int flags[N];
    int count = 0;
    int index = 0;
    for (int i = 0; i < total; i++)
        flags[i] = 1;
    while (left > 1)
    {
        if (flags[index])
            count++;
        if (count == keyNum)
        {
            count = 0;
            flags[index] = 0;
            left--;
        }
        index++;
        if (index == total)
            index = 0;
    }
    for (index = 0; flags[index] == 0; index++)
        ;
    return index + 1;
}