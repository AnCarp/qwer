#include <stdio.h>
int main()
{
	int i, j, k, n;
	scanf("%d", &n);
	if (n < 100 || n > 999)
		printf("Error Input!");
	else
	{
		i = n / 100;
		j = (n % 100) / 10;
		k = n % 10;
		if (n == i * i * i + j * j * j + k * k * k)
			printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n", n,i,i,i,j,j,j,k,k,k);
		else
			printf("Not a narcissistic number");
	}

	return 0;
}