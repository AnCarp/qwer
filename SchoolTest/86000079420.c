/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

要求：一个3行4列的矩阵A，先求矩阵A的转置矩阵B，输出结果，
再将矩阵A和矩阵B相乘，输出结果。

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
  fprintf(OUT,"A的转置矩阵B\n");
   for(i=0;i<N;i++)
   {  
           for(j=0;j<M;j++)
                       fprintf(OUT,"%6d ",b[i][j]);
           fprintf(OUT,"\n");
   }
   fprintf(OUT,"A*B的结果\n");
   for(i=0;i<M;i++)
   { for(j=0;j<M;j++)
            fprintf(OUT,"%6d ",c[i][j]);
      fprintf(OUT,"\n");
   }
  fclose(OUT);
}
