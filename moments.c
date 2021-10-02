#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	float data[200];
	float s1 = 0, s2 = 0, s3 = 0, s4 = 0, m1, m2, m3, m4, g1, g2;
	printf("How many data points?\n");
	scanf("%d", &n);

	printf("Enter data values\n");

	//calculating mean
	for(i = 1; i <= n; i++)
	{
		scanf("%f", &data[i]);
		s1 += data[i];
	}

	m1 = s1/n;

	//calculating 2nd, 3rd and 4th order moments
	for(i = 1; i <= n; i++)
	{
		s2 += pow((data[i] - m1), 2);
		s3 += pow((data[i] - m1), 3);
		s4 += pow((data[i] - m1), 4);
	}

	m2 = s2/n;
	m3 = s3/n;
	m4 = s4/n;

	printf("\nMean(data) = %f\n", m1);
	printf("\nVar(data) = %f\n", m2);
	printf("\nm3(data) = %f\n", m3);
	printf("\nm4(data) = %f\n", m4);

	g1 = m3/pow(m2, 1.5);
	g2 = m4/pow(m2, 2) - 3;

	//Skewness
	if(g1 > 0)
	{
		printf("\nThe data is positively skewed\n");
	}
	else if(g1 < 0)
	{
		printf("\nThe data is negatively skewed\n");
	}
	else
	{
		printf("\nThe data is symmetric\n");
	}

	//Kurtosis
	if(g2 > 0)
	{
		printf("\nThe data is leptokurtic\n");
	}
	else if(g2 < 0)
	{
		printf("\nThe data is platykurtic\n");
	}
	else
	{
		printf("\nThe data is mesokurtic\n");
	}
}
