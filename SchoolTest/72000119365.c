/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���һ���������� 2/1,3/2,5/3,8/5,13/8,21/13......

      ���������е�ǰ20֮�͡� 

------------------------------------------------*/
#define N 20
#include "stdio.h"
int wwjt(float);
int main()
{
        float sum=0;                        //sum��¼����֮��
        /**********Program**********/
   



        /**********  End  **********/
        printf("\n����֮��:%f\n",sum);
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
     

