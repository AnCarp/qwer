//【程序设计】功能：求sum=1!+2!+...+20!的值。
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=20;
    long int sum=0;
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            k*=j;
        }
        sum+=k;
        k=1;
    }
    printf("1!+2!+3!+...%d!=%d\n",n,sum);
    system("PAUSE");
    return 0;
}