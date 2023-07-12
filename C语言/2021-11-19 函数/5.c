#include <stdio.h>
/*
	函数功能：计算两个正整数的最小公倍数
	函数入口参数：整型a，存储第一个正整数 
				  整型b，存储第二个正整数 
	函数返回值：c(整型）
*/ 
int MinCommonMultiple(int a,int b)
{
	int i,c;
	for(i=1;i>0;i++)
	{
		if(i%a==0&&i%b==0)
		{
			c=i;
			break;
		}
	}
	return c;
 } 
int main()
{
	int a,b,result;
	printf("input a,b:");
	scanf("%d,%d",&a,&b);
	result=MinCommonMultiple(a,b);
	printf("MinCommonMultiple=%d",result);
	return 0;
}
