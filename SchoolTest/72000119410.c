/*------------------------------------------------------    
【程序改错】
--------------------------------------------------------

功能：输入一行字符，分别统计出其中英文字母、空格、数字和
      其它字符的个数。

------------------------------------------------------*/

#include <stdio.h>

main()
{
  char c;
  int letters=0,space=0,digit=0,others=0;
  printf("please input some characters\n");
  /**********FOUND**********/
  while((c=getchar())=='\n')
  {
    /**********FOUND**********/
    if(c>='a'&&c<='z'&&c>='A'&&c<='Z')
      letters++;
    /**********FOUND**********/
    else if(c=!' ')
      space++;
    else if(c>='0'&&c<='9')
      digit++;
    else
      others++;
  }
  printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,
  space,digit,others);
}
