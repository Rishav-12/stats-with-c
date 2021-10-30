#include <stdio.h>

int main()
{
	int i, j, n, count1, count2, d, sum = 0;
	float x[100], y[100], r;
	printf("Enter no. of observation:\n");
	scanf("%d", &n);

	printf("Enter the first set of observations:\n");
	for(i = 1; i <= n; i++)
	{
		scanf("%f", &x[i]);
	}

	printf("Enter the second set of observations:\n");
	for(i = 1; i <= n; i++)
	{
		scanf("%f", &y[i]);
	}

	for(i = 1; i <= n; i++)
	{
		count1 = 0;
		count2 = 0;
		for(j = 1; j <= n; j++)
		{
			if(x[i] >= x[j])
			{
				count1++;
			}
			if(y[i] >= y[j])
			{
				count2++;
			}
		}
		d = count1 - count2;
		sum += d*d;
	}
	r = 1 - 6*sum/(float)(n*(n*n - 1));
	printf("Rank correlation = %f\n", r);
}
