//Random sample from N(0,1) distribution. P(X > 1) = ?
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,n,c=0;
	float u1,u2,x,y,prob;
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		u1=rand()/(float)RAND_MAX;
		u2=rand()/(float)RAND_MAX;
		x=sqrt(-2*log(u1))*sin(2*3.14*u2);
		printf("%f\t",x);
		if(x>1)
		c++;
	}
	prob=c/(float)n;
	printf("\n\nP(X > 1) = %f\n",prob);
}

