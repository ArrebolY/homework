#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int craps()
{
	
	int a=rand()%7;
	int b=rand()%7;
	int sum=a+b;
	printf("Player rolled %d + %d = %d\n",a,b,sum);
	return sum;
}
int main()
{
	int sum,point;
	srand((unsigned)time(0));
	sum=craps();
	
	if(sum==7||sum==11)
	{
		printf("Player wins");
	}
	else if(sum==2||sum==3||sum==12)
	{
		printf("Player loses");
	}
	else
	{
		point=sum;
		printf("Point is %d\n",point);
		do
		{
			sum=craps();
		}while(sum!=7&&sum!=point);		
		if(sum==7)
		{
			printf("Player loses");
		}
		else
		{
			printf("Player wins");
		}
		return 0;
	}
}
