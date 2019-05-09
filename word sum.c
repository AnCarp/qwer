#include <stdio.h>
#define N 20
int main()
{
    int wordCount(char *);
    char s[N * 5];
    gets(s);
    printf("%d\n", wordCount(s));
    return 0;
}
int wordCount(char *s)
{
    int i, word = 0, count = 0;
    for (i = 0; s[i] != 0; i++)
    {

        if (s[i] == ' ')
            word = 0;
        else if (word == 0)
        {
            word = 1;
            count++;
        }
    }
    return count;
}