/*------------------------------------------------
��������ơ�
--------------------------------------------------

��һ�����������������ת���ɶ�������ʽ��
ת���ɵĶ����������ַ�������ʽ���α���
�ڶ�ά�ַ������ÿһ���С�

------------------------------------------------*/
#include <stdio.h>
#define N 5
void wwjt(char[][20]);
void main()
{
   int a[N]={11,8,125,26,43};
   char b[N][20];
/**********Program**********/       
  



 /**********  End  **********/
  wwjt(b);
}

void wwjt(char b[][20])
{
  FILE *OUT;
  int i;
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<N;i++)
   fprintf(OUT,"%s\n",b[i]);
  fclose(OUT);
}
