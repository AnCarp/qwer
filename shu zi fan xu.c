#include<stdio.h>
int main()
{
    void invert(int *,int);
    int i,n;
    int num[30];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",num+i);
    }
    invert(num,n);
	for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
	printf("\n");
    return 0;
}
void invert(int *num,int n)
{
    int i,temp;
    for(i=0;i<n/2.0;i++)
    {
        temp=num[i];
        num[i]=num[n-i-1];
        num[n-i-1]=temp;
    }
}