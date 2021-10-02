#include <stdio.h>

int main()
{
	int n, i;
	float data[200], sum = 0, mean;
	printf("How many data points?\n");
	scanf("%d", &n);

	printf("Enter data values\n");

	//taking input and calculating sum of data points
	for(i = 1; i <= n; i++)
	{
		scanf("%f", &data[i]);
		sum += data[i];
	}

	mean = sum/n;
	printf("\nMean(data) = %f\n", mean);
}
