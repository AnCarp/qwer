/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：有一个分数序列 2/1,3/2,5/3,8/5,13/8,21/13......

      求出这个数列的前20之和。 

------------------------------------------------*/
#define N 20
#include "stdio.h"
int wwjt(float);
int main()
{
        float sum=0;                        //sum记录各项之和
        /**********Program**********/
   



        /**********  End  **********/
        printf("\n各项之和:%f\n",sum);
        wwjt(sum);
        return 0;
}

int wwjt(float a)
{
        FILE *OUT;
        OUT=fopen("out.dat","w");
        if(OUT==NULL)
        {
                printf("Write FILE Error");
        }
        fprintf(OUT,"%f\n",a);
        fclose(OUT);
        return 0;
}        
     

