#include <stdio.h>
#define N 20
int main()
{
    void printchar(char *);
    char s[N * 2];
    gets(s);
    printchar(s);
    return 0;
}
void printchar(char *s)
{
    int isL(char);
    int i, count = 0;
    for (i = 0; s[i] != 0; i++)
    {
        if (isL(s[i]))
        {
            count++;
            if (count % 2 == 1)
                putchar(s[i]);
        }
    }
    putchar('\n');
}
int isL(char c)
{
    return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z';
}