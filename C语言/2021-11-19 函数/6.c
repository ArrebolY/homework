#include <stdio.h>
/*
	函数功能：计算两个正整数的最大公约数
	函数入口参数：整型a，存储第一个整数
	              整型b，存储第二个整数 
	函数返回值：b 
*/
int MaxCommonFactor(int a,int b)
{
	if(a%b==0)
	{
		return b;
	}
	else
		return MaxCommonFactor(b,a%b);		
}
int main()
{
	printf("Input a,b:");
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=MaxCommonFactor(a,b);
	printf("MaxCommonFactor=%d",c);
	return 0;
}
