#include <stdio.h>

int main()
{
	int i, j, k, n, flag = 0;
	float a[5][5], b[5][5], sum;
	printf("Enter order of the matrix:\n");
	scanf("%d", &n);

	printf("Enter the elements of the matrix rowwise:\n");
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			sum = 0;
			for(k = 1; k <= n; k++)
			{
				sum += a[i][k]*a[k][j];
			}
			if(a[i][j] != sum)
			{
				flag = 1;
			}
		}
	}

	if(flag == 1)
	{
		printf("The matrix is not idempotent\n");
	}
	else
	{
		printf("The matrix is idempotent\n");
	}
}
