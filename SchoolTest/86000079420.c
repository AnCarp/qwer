/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

Ҫ��һ��3��4�еľ���A���������A��ת�þ���B����������
�ٽ�����A�;���B��ˣ���������

-------------------------------------------------------*/
#include <stdio.h>
#define  M   3
#define  N   4
void  wwjt(int[][M],int[][M]); 

void main()
{ 
    int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
    int b[N][M],c[M][M];
  /**********Program**********/
        


/**********  End  **********/
    wwjt(b,c);
}


void wwjt(int b[][M],int c[][M])
{
  FILE *OUT;
  int i,j;
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  }
  fprintf(OUT,"A��ת�þ���B\n");
   for(i=0;i<N;i++)
   {  
           for(j=0;j<M;j++)
                       fprintf(OUT,"%6d ",b[i][j]);
           fprintf(OUT,"\n");
   }
   fprintf(OUT,"A*B�Ľ��\n");
   for(i=0;i<M;i++)
   { for(j=0;j<M;j++)
            fprintf(OUT,"%6d ",c[i][j]);
      fprintf(OUT,"\n");
   }
  fclose(OUT);
}
