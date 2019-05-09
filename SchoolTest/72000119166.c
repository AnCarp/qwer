/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求sum=1!+2!+...+20!的值。

------------------------------------------------*/
#include "stdio.h"
int wwjt(int);
int main()
{
        int n=20;
        long int sum=0;
        /**********Program**********/
        





        /**********  End  **********/
        printf("1!+2!+3!+...%d!=%d\n",n,sum);
        wwjt(sum);
        return 0;
}

int wwjt(int a)
{
        FILE *OUT;
        OUT=fopen("out.dat","w");
        if(OUT==NULL)
        {
                printf("Write FILE Error");
        }
        fprintf(OUT,"%d\n",a);
        fclose(OUT);
        return 0;

}
