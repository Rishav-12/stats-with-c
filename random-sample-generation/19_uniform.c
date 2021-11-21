//Random sample from U(0,1) distribution.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,n;
	float r;
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		r=rand()/(float)RAND_MAX;
		printf("%f\t",r);
	}
	printf("\n");
}
