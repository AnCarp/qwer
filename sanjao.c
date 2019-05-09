#include <stdio.h>
int main()
{
    double a(double n);
    int n;
    scanf("%d",&n);
    printf("%.0lf", a((double)n));
    return 0;
}
double a(double n)
{
    double fck(double n);
    if (n == 1)
        return fck(1.0);
    else
        n = fck(n) + a(n - 1);
    return n;
}
double fck(double n)
{
    if (n == 1)
        return 1.0;
    else
        n = n * fck(n - 1);
    return n;
}
