#include <stdio.h>

int main()
{
	int i, j, k, m, n, p, q;
	float a[5][5], b[5][5], sum;
	printf("Enter order of the first matrix:\n");
	scanf("%d %d", &m, &n);

	printf("Enter order of the second matrix:\n");
	scanf("%d %d", &p, &q);

	if(n != p)
	{
		printf("Matrix multiplication is not possible\n");
	}
	else
	{
		float c[m][q];
		printf("Enter the elements of the first matrix rowwise:\n");
		for(i = 1; i <= m; i++)
		{
			for(j = 1; j <= n; j++)
			{
				scanf("%f", &a[i][j]);
			}
		}

		printf("Enter the elements of the second matrix rowwise:\n");
		for(i = 1; i <= p; i++)
		{
			for(j = 1; j <= q; j++)
			{
				scanf("%f", &b[i][j]);
			}
		}

		//Multiply
		for(i = 1; i <= m; i++)
		{
			for(j = 1; j <= q; j++)
			{
				sum = 0;
				for(k = 1; k <= n; k++)
				{
					sum += a[i][k]*b[k][j];
				}
				c[i][j] = sum;
			}
		}

		printf("\nResult of multiplication = \n\n");
		for(i = 1; i <= m; i++)
		{
			for(j = 1; j <= q; j++)
			{
				printf("%f", c[i][j]);
			}
			printf("\n");
		}
	}
}
