#include<stdio.h>
int main()
{
	int i,j,t;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		    printf(" ");
		for(t=1;t<=6-i;t++)
			printf("%d",6-i);
		    printf("\n");
	}
	return 0;
}
