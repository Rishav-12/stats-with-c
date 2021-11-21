//Random sample from Bernoulli distribution with success prob. p.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,n,x;
	float r,p;
	printf("Enter the parameter of the Bernoulli distribution:\n");
	scanf("%f",&p);
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		r=rand()/(float)RAND_MAX;
		if(r<=p)
		x=1;
		else
		x=0;
		printf("%d\t",x);
	}
	printf("\n");
}

