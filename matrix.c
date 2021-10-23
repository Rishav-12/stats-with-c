#include <stdio.h>

int main()
{
	int i, j, m, n;
	float a[5][5];
	printf("Enter order of the matrix:\n");
	scanf("%d %d", &m, &n);

	printf("Enter the elements rowwise:\n");

	// taking input
	for(i = 1; i <= m; i++)
	{
		for(j = 1; j <= n; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}

	// display original array
	printf("The Array is :\n");
	for(i = 1; i <= m; i++)
	{
		for(j = 1; j <= n; j++)
		{
			printf("%f\t", a[i][j]);
		}
		printf("\n");
	}

	// display transpose of the array
	printf("Transpose of the Array is :\n");
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
			printf("%f\t", a[j][i]);
		}
		printf("\n");
	}
}
