//银行一年整存零取的月息为0.63%。现在某人手中有一笔钱，
//他打算在今后的五年中的年底取出1000元，到第五年时刚好取完，请算出他存钱时应存入多少
#include<stdio.h>

int main()
{
	float i,j;
	for(i=0;i<5;i++)
	{
		j=(j+1000)/(1+12*0.0063);
	}
	printf("%f",j);
	return 0;
}
