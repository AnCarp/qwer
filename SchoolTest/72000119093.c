/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ�������������m��n�����Լ������С�������������

------------------------------------------------*/
#include "stdio.h"
int wwjt(int,int);
int main()
{
        int m=10,n=15,gongyue,gongbei;//gongyueΪ���Լ����gongbeiΪ��С������
        /**********Program**********/
         








        /**********  End  **********/
        printf("%d��%d�����Լ����:%d\n",m,n,gongyue);
        printf("%d��%d����С��������:%d\n",m,n,gongbei);
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

