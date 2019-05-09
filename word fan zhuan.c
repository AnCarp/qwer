#include <stdio.h>
#define N 10
int main()
{
    int wordReverse(char *, char(*)[20]);
    int num, i;
    char str[N * 20], wd[N][20]={'\0'};
    gets(str);
    num = wordReverse(str, wd);
    for (i = num; i >= 0; i--)
        printf("%s ", wd[i]);
    printf("\n");
    return 0;
}
int wordReverse(char *str, char (*wd)[20])
{
    int i, j = 0;
    int num = -1, word = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            word = 0;
            j = 0;
        }
        else if (word == 0)
        {
            word = 1;
            num += 1;
        }
        if (word)
        {
            wd[num][j] = str[i];
            j++;
        }
    }
    return num;
}