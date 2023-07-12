#include <stdio.h>
/*
	函数功能：计算两个正整数的最大公约数
	函数入口参数：整型a，存储第一个整数
	              整型b，存储第二个整数 
	函数返回值：a
*/
int MaxCommonFactor(int a,int b)
{
	while (a>0&&b>0)
	{
		if(a>b)
		{
			a-=b;
		}
		else if(a<b)
		{
			b-=a;
		}	
		else
			break;
	}
	return a;
}
int main()
{
	int a,b;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	printf("MaxCommonFactor=%d",MaxCommonFactor(a,b));
	return 0;
}
