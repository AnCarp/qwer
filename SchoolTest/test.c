#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        void fun(int a[], int n);
        int a[10];
        int i;
        for (i = 0; i < 10; i++)
            a[i] = rand() % 20 - 9;
        for (i = 0; i < 10; i++)
            printf("%d ", a[i]);
        printf("\n\n");
        fun(a, 10);
        for (i = 0; i < 10; i++)
            printf("%d ", a[i]);
        printf("\n");
        system("pause");
    }
    return 0;
}
void fun(int a[], int n)
{
    int i = 0, j = n - 1, temp;
    while (i < j)
    {
        while (a[i] < 0)
            i++;
        while (a[j] >= 0)
            j--;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}