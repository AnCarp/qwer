/*------------------------------------------------------        
【程序改错】
--------------------------------------------------------

功能：在一个已按升序排列的数组中插入一个数，插入后，数
      组元素仍按升序排列。

------------------------------------------------------*/
#include <stdio.h>
#define N 11
void main()
{
  int i,number,a[N]={1,2,4,6,8,9,12,15,149,156};
  printf("please enter an integer to insert in the array:\n");
  /**********FOUND**********/
  scanf("%d",&number);
  printf("The original array:\n");
  for(i=0;i<N-1;i++)
    printf("%5d",a[i]);
  printf("\n");
  /**********FOUND**********/
  for(i=N-2;i>=0;i--)
    if(number<=a[i])
  /**********FOUND**********/
         a[i+1]=a[i];
   else
   {
        a[i+1]=number;
       /**********FOUND**********/
        break;
   }
  if(number<a[0]) 
        a[0]=number;
  printf("The result array:\n");
  for(i=0;i<N;i++)
     printf("%5d",a[i]);
  printf("\n");
}
