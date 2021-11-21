//Random sample from Exponential distribution with mean t.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,n;
	float r,x,t;
	printf("Enter the parameter of the distribution:\n");
	scanf("%f",&t);
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		r=rand()/(float)RAND_MAX;
		x=-t*log(1-r);
		printf("%f\t",x);
	}
	printf("\n");
}

