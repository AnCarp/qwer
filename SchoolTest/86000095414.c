/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

功能：实现把两个字符串str1和str2连接(不要使用库函数strcat)，
      即把str2字符串连接到str1字符串的后面。
      例如，将下面两个字符串连接：
      FirstString－－
      SecondString 
      程序输出：
      FirstString－－SecondString
-------------------------------------------------------*/
#include <stdio.h>
void  wwjt(char[]); 

void main()
{
  char s1[60]="FirstString－－";
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
