#include<stdio.h>
int main()
{
	int i,j,m,n;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(i!=j)
			{
				m=1000*i+100*i+10*j+j;
			}
			for(n=32;n<=99;n++)
				if(n*n==m)
				{
					printf("%d",m);
				}
	    }
	}
}
