/*------------------------------------------------
��������ơ�
--------------------------------------------------

��һ��һά����score���ڷ�10��ѧ���ĳɼ�������ͷ�
��ƽ���֣��������

���磺���10��ѧ���ĳɼ��ֱ�Ϊ92��87��68��56��92��84��
      70��65��90��60 ����ͷ�Ϊ��56 ƽ���ɼ�Ϊ��76.400000

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

