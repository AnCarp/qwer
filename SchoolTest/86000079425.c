/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ����һ���ַ���s�����������ַ�ǰ��һ��$�ַ�,

������һ���ַ���t�У�����������

���磬�ַ���sΪ"A1B23CD45"�����ַ���tΪ��
          
"A$1B$2$3CD$4$5" ��

-------------------------------------------------------*/
#include <stdio.h>
#include<string.h>
void  wwjt(char[]); 

int main()
{
  char s[80]="A1B23CD45",t[100];
/**********Program**********/
  char i,j,n;
  for(i=0;s[i]!='\0';i++)
	  if(s[i]>='0'&&s[i]<='9')
	  {n=0;
	  while(s[i+1+n]!='\0') n++;
	  for(j=i+n+1;j>i;j--)
		  s[j-1]=s[j];
	  s[j-1]='$';

	  i=i+1;
	  }



/**********  End  **********/
  wwjt(t);
  return 0;
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
