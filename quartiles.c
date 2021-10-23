#include <stdio.h>

int main()
{
	int i, j, n, r1, r2, r3;
	float x[100], q1, q2, q3, tmp;
	printf("Enter no. of observation:\n");
	scanf("%d", &n);

	printf("Enter the observations:\n");
	for(i = 1; i <= n; i++)
	{
		scanf("%f", &x[i]);
	}

	for(i = 1; i <= n; i++)
	{
		for(j = i+1; j <= n; j++)
		{
			if(x[i] > x[j])
			{
				tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
			}
		}
	}

	if(n % 2 == 0)
	r2 = n/2;
	else
	r2 = n/2 + 1;
	if(n % 4 == 0)
	{
		r1 = n/4;
		r3 = 3*n/4;
	}
	else
	{
		r1 = n/4 + 1;
		r3 = 3*n/4 + 1;
	}

	q1 = x[r1];
	q2 = x[r2];
	q3 = x[r3];

	printf("Q1 = %f, Q2 = %f, Q3 = %f\n", q1, q2, q3);
}
