#include<stdio.h>
int main()
{
	int m;
	printf("please input m=");
	scanf("%d",&m);
	if(m<0)
	{
		if(m%2==0)
		{
			printf("%d is a negative even\n",m);		
		}
		else 
		{
			printf("%d is a negative odd\n",m);
		}
	}
	if(m>0)
	{
		if(m%2==0)
		{
			printf("%d is a positive even\n",m);
		}
	    else
	    {
	    	printf("%d is a positive odd\n",m);
		}
	}  
	return 0;
}
