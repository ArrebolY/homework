#include <stdio.h>
#include <math.h>
/*
	函数功能：素数判断 
	函数入口参数：整型i 
	函数返回值：prime(整型） 
*/
int prime(int i)
{
	int n=0,prime=1;
	for(n=2;n<=sqrt((double)i);n++)
	{
		if(i%n==0)
		{
			prime=0;
		}
	}
	return prime;
 } 
/*
	函数功能：验证哥德巴赫猜想
	函数入口参数：整型num（不小于6的偶数）
	函数返回值：无 
*/
int Goldbach(int num)
{
	int a,b,m,n;
	for(a=2;a<=num;a++)
	{
		m=prime(a);
		if(m==1)	
		{
			b=num-a;
			if(b>0&&b<=a)
			{
				n=prime(b);
				if(n==1)
				{
					printf("%d=%d+%d\n",num,a,b);
				}	
			}			
		}	
	}	
 } 
int main()
{
	printf("Please input an even number which is bigger than 6:");
	int num;
	scanf("%d",&num);
	if(num<6 || num%2!=0)
	{
		printf("Wrong number!");
	}
	else 
		Goldbach(num);
	return 0;		
 } 
