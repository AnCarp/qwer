/*��������ơ����ܣ�insert�������ַ���str1���뵽�ַ���str2��posָ����λ�ô���
���磺�ַ���str1Ϊ "prog",str2Ϊ"c++ ram",str1���뵽str2��5���ַ���ʼ��λ�ã������str2Ϊ "c++ program"��*/
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