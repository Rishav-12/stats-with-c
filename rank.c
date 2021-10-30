#include <stdio.h>

int main()
{
	int i, j, n, count, rank[100];
	float x[100];
	printf("Enter no. of observation:\n");
	scanf("%d", &n);

	printf("Enter the observations:\n");
	for(i = 1; i <= n; i++)
	{
		scanf("%f", &x[i]);
	}

	printf("The Rank vector is given by:\n");
	for(i = 1; i <= n; i++)
	{
		count = 0;
		for(j = 1; j <= n; j++)
		{
			if(x[i] >= x[j])
			{
				count++;
			}
		}
		rank[i] = count;
		printf("%d ", rank[i]);
	}
	printf("\n");
}
