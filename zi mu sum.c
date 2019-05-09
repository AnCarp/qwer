#include <stdio.h>
#define N 80
int main()
{
    int i, j;
    int charCount(char *s);
    char s[N]={'\0'};
    gets(s);
    j = charCount(s);
    printf("%d", j);
    return 0;
}
int charCount(char *s)
{
    int i, j = 0;
    for (i = 0; i < 80; i++)
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            j++;
    return j;
}