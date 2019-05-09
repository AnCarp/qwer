#include <stdio.h>
#define N 200
int main()
{
	int wordCount(char *);
	int num;
	char str[N];
	gets(str);
	num = wordCount(str);
	printf("%d", num);
	return 0;
}
int wordCount(char *str)
{
	int i, sign;
	int num = 0, word = 0;
	for (i = 0; str[i]; i++)
	{
		sign=(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z');
		if (sign==0)
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	return num;
}