/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

���ܣ�ʵ�ְ������ַ���str1��str2����(��Ҫʹ�ÿ⺯��strcat)��
      ����str2�ַ������ӵ�str1�ַ����ĺ��档
      ���磬�����������ַ������ӣ�
      FirstString����
      SecondString 
      ���������
      FirstString����SecondString
-------------------------------------------------------*/
#include <stdio.h>
void  wwjt(char[]); 

void main()
{
  char s1[60]="FirstString����";
  char s2[30]="SecondString";
/**********Program**********/
 



/**********  End  **********/
  wwjt(s1);
}

void wwjt(char a[])
{
  FILE *OUT;
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  }
  fputs(a,OUT);
  fclose(OUT);
}
