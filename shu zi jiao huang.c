#include <stdio.h>
int main()
{
    void max_min_value(int *, int);
    int i, n, num[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    max_min_value(num, n);
    for (i = 0; i < n; i++)
        printf("%d ", num[i]);
    printf("\n");
    return 0;
}
void max_min_value(int *number, int n)
{
    int *max, *min, *p, tmp;
    max = number;
    min = number;
    for (p = number + 1; p < number + n; p++)
        if (*min > *p)
            min = p;
    tmp = number[0];
    number[0] = *min;
    *min = tmp;
    for (p = number + 1; p < number + n; p++)
        if (*max < *p)
            max = p;
    tmp = number[n - 1];
    number[n - 1] = *max;
    *max = tmp;
}
