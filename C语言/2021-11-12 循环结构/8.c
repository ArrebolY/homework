#include <stdio.h>
int main()
{
	int i,j,m,n;
	printf("������Ҫ��ӡ������:");		
	scanf("%d",&i); 	
	for(j=1;j<=i;j++)
	{
		for(m=1;m<=i-j;m++)		
		{
			printf(" ");
		}			
		for(n=1;n<=2*j-1;n++)	
		{
			printf("*");			
		}
		printf("\n");		
	}
 } 
