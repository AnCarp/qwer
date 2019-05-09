#include <stdio.h>
int main()
{
    int a, s = 0,b;
    for (a = 2; a < 100; a + 2)
       { b= a;
       s=s+b;
       }
    printf("%d", s);
    return 0;
}