/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求两个正整数m和n的最大公约数和最小公倍数并输出。

------------------------------------------------*/
#include "stdio.h"
int wwjt(int,int);
int main()
{
        int m=10,n=15,gongyue,gongbei;//gongyue为最大公约数，gongbei为最小公倍数
        /**********Program**********/
         








        /**********  End  **********/
        printf("%d和%d的最大公约数是:%d\n",m,n,gongyue);
        printf("%d和%d的最小公倍数是:%d\n",m,n,gongbei);
        wwjt(gongyue,gongbei);
        return 0;
}

int wwjt(int a,int b)
{
        FILE *OUT;
        OUT=fopen("out.dat","w");
        if(OUT==NULL)
        {
                printf("Write FILE Error");
        }
        fprintf(OUT,"%d\n%d",a,b);
        fclose(OUT);
        return 0;

}

