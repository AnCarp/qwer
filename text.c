#include <stdio.h>

int main()
{
    void swap(int *, int *);
    int a = 3, b = 5;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}