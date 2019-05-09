#include <stdio.h>
int main()
{
    void print_trangle(int a, char c);
    int a;
    char c;
    scanf("%c", &c);
    scanf("%d", &a);
    print_trangle(a, c);
    return 0;
}
void print_trangle(int a, char c)
{
    int i, j, k, z;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
            printf(" ");
        /*for (k = 1, z = 0; k <= 2 * i - 1; k++, z++)
            printf("%c", c + z);*/
        
        
            for (z = 0;z<2*i-1; z++)
                printf("%c", c + z);
        putchar('\n');
    }
}