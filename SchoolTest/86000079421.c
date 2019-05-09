/*------------------------------------------------
【程序设计】
--------------------------------------------------

有一个一维数组score，内放10个学生的成绩，求最低分
和平均分，并输出。

例如：如果10个学生的成绩分别为92，87，68，56，92，84，
      70，65，90，60 则最低分为：56 平均成绩为：76.400000

------------------------------------------------*/
  
#include <stdio.h>

void main()
{
  float a[]={92,87,68,56,92,84,70,65,90,60},low,average;
  FILE  *OUT;
  /**********Program**********/
  int i,sum=0;
  low=a[0];
  for(i=0;i<10;i++)
	  if(a[i]<=low)
		  low=a[i];
	 for(i=0;i<10;i++)
	  sum=sum+a[i];
	  average=sum/10;
/**********  End  **********/
  printf("the lowest score is %.2f\n",low);
  printf("average score is %.2f\n",average);
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  fprintf(OUT,"%.2f %.2f\n",low,average);
  fclose(OUT);
}

