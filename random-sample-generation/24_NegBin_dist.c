//Random sample from Neg.Bin(r,p) distribution.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,n,m,x,s,f,r;
	float u,p;
	printf("Enter the parameters of Neg. Bin(r,p) distribution:\n");
	scanf("%d%f",&r,&p);
	printf("Enter the number of observations to be generated:\n");
	scanf("%d",&n);
	srand(time(0));
	printf("The random sample is:\n\n");
	for(i=1;i<=n;i++)
	{
		s=0;
		f=0;
		while(s<r)
		{
			u=rand()/(float)RAND_MAX;
			if(u<=p)
			s++;
			else
			f++;
		}
		x=f;
		printf("%d\t",x);
	}
	printf("\n");
}

