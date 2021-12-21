//Solution of a system of linear equations: Ax = b.
#include<stdio.h>
int main()
{
	int i,j,n,k;
	float a[10][10],b[10],t1,t2,s;
	printf("Enter the order of a square matrix \n");
	scanf("%d",&n);
	printf("Enter the elements of the matrix in row-wise \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(j<=n)
			{
				scanf("%f",&a[i][j]);
			}
			else
			{
				if(j-i==n)
				a[i][j]=1;
				else
				a[i][j]=0;
			}
		}
	}
	printf("Enter the b vector in Ax = b\n");
	for(i=1;i<=n;i++)
	scanf("%f",&b[i]);

	for(k=1;k<=n;k++)
	{
		t1=a[k][k];
		for(j=1;j<=2*n;j++)
		a[k][j]=a[k][j]/t1;
		for(i=1;i<=n;i++)
		{
			if(i!=k)
			{
				t2=a[i][k];
				for(j=1;j<=2*n;j++)
				{
					a[i][j]=a[i][j]-t2*a[k][j];
				}
			}
		}
	}
	printf("\nThe solution is\n\n");
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=n+1;j<=2*n;j++)
		{
			s=s+a[i][j]*b[j-n];
		}
		printf("%f\n",s);
	}
}
