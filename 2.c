#include <stdio.h>
int main()
{
    double fck(double n);
    int n;
    scanf("%d", &n);
    printf("%f", fck((double)n));
    return 0;
}
double fck(double n)
{
    if (n == 1)
        return 1.0;
    else
        n = n * fck(n - 1);
    return n;
}
