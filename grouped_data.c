#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, f[200];
	float l[200], u[200], s1 = 0, s2 = 0, sumOfFreq = 0, mid, mean, var;
	printf("How many classes?\n");
	scanf("%d", &n);

	printf("Enter lower class-boundary, upper class-boundary and class frequency in order\n");

	for(i = 1; i <= n; i++)
	{
		scanf("%f%f%d", &l[i], &u[i], &f[i]);
		mid = (l[i] + u[i]) / 2;
		s1 += mid*f[i];
		sumOfFreq += f[i];
	}

	mean = s1/sumOfFreq;

	printf("\nMean = %f\n", mean);

	for(i = 1; i <= n; i++)
	{
		mid = (l[i] + u[i]) / 2;
		s2 += pow((mid - mean), 2)*f[i];
	}

	var = s2/sumOfFreq;

	printf("\nVariance = %f\n", var);
}
