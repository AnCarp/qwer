/*------------------------------------------------
【程序设计】
--------------------------------------------------

将一个数组的所有正整数转换成二进制形式，
转换成的二进制数以字符串的形式依次保存
在二维字符数组的每一行中。

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
