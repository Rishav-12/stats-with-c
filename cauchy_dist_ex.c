//Random sample from Cauchy(m,s) distribution
//Estimate P[X > m/2 | X belongs to (m-3s,m+3s)]
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,n,c1=0,c2=0;
	float r,x,m,s,prob;
	printf("Enter the location parameter m of the distribution:\n");
	scanf("%f",&m);
	printf("Enter the scale parameter s of the distribution:\n");
	scanf("%f",&s);
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		r=rand()/(float)RAND_MAX;
		x=m + s*tan(3.14*(r-0.5));
		//Now calculate given probability
		if(x>m/2 && (x>m-3*s && x<m+3*s))
		c1++;
		if(x>m-3*s && x<m+3*s)
		c2++;
		printf("%f\n",x);
	}
	prob=c1/(float)c2;
	printf("\nRequired Probability=%f\n",prob);
}
