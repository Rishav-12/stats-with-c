#include <stdio.h>

int main()
{
	int i, j, k, n, flag = 0, rank = 0;
	float a[5][5], sum;
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
				break;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}

	if(flag == 1)
	{
		printf("The matrix is not idempotent\n");
	}
	else
	{
		printf("The matrix is idempotent\n");

		// find the rank of the matrix

		/*
		the rank of an idempotent matrix is equal to its trace
		the trace of a square matrix A is defined to be the sum of elements on the main diagonal
		(from the upper left to the lower right) of A
		*/

		for(i = 1; i <= n; i++)
		{
			rank += a[i][i];
		}
		printf("The rank of the matrix = %d\n", rank);
	}
}
