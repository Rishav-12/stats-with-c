#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,n,m;
	float r1,r2,x,y;
	printf("Enter the d.f. of the Chi-square distribution:\n");
	scanf("%d",&m);
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The generated sample is:\n");
	for(i=1;i<=n;i++)
	{
		y=0;
		for(j=1;j<=m;j++)
		{
			r1=rand()/(float)RAND_MAX;
			r2=rand()/(float)RAND_MAX;
			x=sqrt(-2*log(r1))*sin(2*3.14*r2);
			y=y+x*x;
		}
		printf("%f\n",y);
	}
}
