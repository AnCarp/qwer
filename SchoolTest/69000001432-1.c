/*【程序设计】功能：insert函数将字符串str1插入到字符串str2中pos指定的位置处。
例如：字符串str1为 "prog",str2为"c++ ram",str1插入到str2第5个字符开始的位置，插入后str2为 "c++ program"。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str1[10], str2[50];
	int pos;
	printf("Enter a string:");
	gets(str1);
	printf("Enter another string:");
	gets(str2);
	printf("Enter the insertion position:");
	scanf("%d", &pos);
	int i, len1, len2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	for (i = len2; i >= pos - 1; i--)
		str2[i + len1] = str2[i];
	for (i = 0; i < len1; i++)
		str2[i + pos - 1] = str1[i];
	printf("After insertion:");
	puts(str2);
	system("PAUSE");
	return 0;
}