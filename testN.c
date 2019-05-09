#include <stdio.h>
int main()
{
    char a[100], b[100];
    int i, j;
    gets(a);
    gets(b);
    i = 0;
    while (a[i] != 0)
        i++;
    for (j = 0; b[j] != 0; j++)
        a[i + j] = b[j];
    a[i+j]='\0';
    puts(a);
    return 0;
}