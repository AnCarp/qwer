#include<stdio.h>
int main()
{
	float getaver(int *p);
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	getaver(a);
	printf("%.2f",getaver(a));
	return 0;
}
float getaver(int *p)
{
	float b=0;
		int i;
		for(i=0;i<10;i++,p++)
			b+=*p;
		b/=10;
		return b;
}
