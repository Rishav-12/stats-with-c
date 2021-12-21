//Construction of frequency distribution.
#include<stdio.h>
int main()
{
	int i,j,k,n,f[20];
	float x[100],l[20],u[20],h,c;
	printf("Enter the total number of observations:\n");
	scanf("%d",&n);
	printf("Enter the observations:\n");
	for(i=1;i<=n;i++)
	scanf("%f",&x[i]);
	printf("Enter the numbe of classes:\n");
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(x[i]>x[j])
			{
				c=x[i];
				x[i]=x[j];
				x[j]=c;
			}
		}
	}
	h=(x[n]-x[1])/k;
	for(j=1;j<=k;j++)
	{
		f[j]=0;
		for(i=1;i<=n;i++)
		{
			if(x[i]>=x[1]+(j-1)*h && x[i]<x[1]+j*h)
			f[j]++;
		}
	}
	f[k]=f[k]+1;
	printf("The frequency distribution table is given by:\n\n");
	printf("  Class interval\tFreq.");
	printf("\n--------------------------------");
	for(j=1;j<=k;j++)
	{
		printf("\n%0.3f  -  %0.3f\t  %d",x[1]+(j-1)*h,x[1]+j*h,f[j]);
	}
	printf("\n\n\n");
}
