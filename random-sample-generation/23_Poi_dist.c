//Random sample from Poi(l) distribution.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,n,m=50000,x,c;
	float r,p,l;
	printf("Enter the parameters of Poi(l) distribution:\n");
	scanf("%f",&l);
	p=l/m;
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		x=0;
		for(j=1;j<=m;j++)
		{
			r=rand()/(float)RAND_MAX;
			if(r<=p)
			c=1;
			else
			c=0;
			x=x+c;
		}
		printf("%d\t",x);
	}
	printf("\n");
}

