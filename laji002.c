#include<stdio.h>
int main()
{
    char str1[100],str2[50];
    gets(str1);
    gets(str2);
    char *p1,*p2;
    p1=str1,p2=str2;
    while(*p1++);
    *(p1-1)=' ';
    while(*p1++=*p2++);
    puts(str1);
    return 0;
}