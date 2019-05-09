/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
功能：insert函数将字符串str1插入到字符串str2中pos指定的位置处。
例如：字符串str1为 "prog",str2为"c++ ram",str1插入到str2第5个
      字符开始的位置，插入后str2为 "c++ program"。
-------------------------------------------------------*/
#include<stdio.h>
#include<string.h>
void wwjt();
void insert(char str1[],char str2[],int pos)
{
 /**********Program**********/       
char *p1,*p2,*p3;
 /**********  End  **********/
}

int main()
{
        char str1[10],str2[50];
        int pos;
        printf("Enter a string:");
        gets(str1);
        printf("Enter another string:");
        gets(str2);
        printf("Enter the insertion position:");
        scanf("%d",&pos);
        insert(str1,str2,pos);
        printf("After insertion:");
        puts(str2);
        wwjt();
        return 0;
}

void wwjt()
{
  FILE*IN,*OUT;
  char str1[10],str2[50];
  int i;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  fgets(str1,10,IN);
  i=strlen(str1);
  if(str1[i-1]=='\n') str1[i-1]=0;
  fgets(str2,50,IN);
  i=strlen(str2);
  if(str2[i-1]=='\n') str2[i-1]=0;
  fscanf(IN,"%d",&i);
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  insert(str1,str2,i);
  fprintf(OUT,"%s\n",str2);
  fclose(OUT);
}
