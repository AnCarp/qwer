#include <stdio.h>
int main()
{
    char str1[100], str2[50];
    gets(str1);
    gets(str2);
    int i, j = 0;
    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1 [++i] = str2[j];
        
    }
    printf("%s", str1);
    return 0;
}