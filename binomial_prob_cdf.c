#include <stdio.h>
#include <math.h>

int fact(int z);

int main()
{
	int i,n,x;
	float prob,cdf=0,p;
	printf("Enter the parameters of Bin(n,p):\n");
	scanf("%d%f",&n,&p);
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	prob = (fact(n)/(fact(x)*fact(n-x)))*pow(p,x)*pow(1-p,n-x);

	for(i=0;i<=x;i++)
	{
		cdf += (fact(n)/(fact(i)*fact(n-i)))*pow(p,i)*pow(1-p,n-i);
	}
	printf("P(X=%d) = %f\nP(X<=%d) = %f\n",x,prob,x,cdf);
}

int fact(int z)
{
	int k,u=1;
	for(k=1;k<=z;k++)
	{
		u *= k;
	}
	return u;
}
