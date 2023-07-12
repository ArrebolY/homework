//¿≠∂°∑Ω’Û 
#include<stdio.h>
int main()
{
	int n,i,j,m,k;
	printf("please input n:");
	scanf("%d",&n);
	printf("The possible Latin Squares of order %d are:\n",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m=(i+j)%n;
			for(k=0;k<n;k++)
				printf("%d",(m+k)%n+1);
				printf("\n");
		}
		printf("\n");
	}
}
