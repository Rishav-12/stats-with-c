//Random sample from N(m,s^2) distribution.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,n;
	float u1,u2,m,s,x,y;
	printf("Enter the parameters, m & s of N(m,s^2) distribution:\n");
	scanf("%f%f",&m,&s);
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		u1=rand()/(float)RAND_MAX;
		u2=rand()/(float)RAND_MAX;
		x=sqrt(-2*log(u1))*sin(2*3.14*u2);
		y=m+s*x;
		printf("%f\t",y);
	}
	printf("\n");
}

