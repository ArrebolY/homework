#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double y;
	printf("please input an interger:");
	scanf("%d",&x);
	if(x>0)
	{
		y = exp((double)-x);
		printf("y=%g",y);
	}
	else if(x==0)
	{
		printf("y=1");
	}
    else
	{
 	    y = -exp((double)x);
		printf("y=%g",y);
	}
	return 0;
}
