#include <stdio.h>
#define N 100
int main()
{
    char s[N];
    int word = 0;
    gets(s);
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] != ' ')
        {
            if (word == 0)
                word = 1;
            putchar(s[i]);
        }
        else if (word == 1)
        {
            word = 0;
            putchar(s[i]);
        }
    }
    putchar('\n');
    return 0;
}
