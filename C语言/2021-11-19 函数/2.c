#include <stdio.h>
/*
	函数功能：判断一个数是不是另一个数的倍数
	函数入口参数：整型a，存储第一个整数
	              整型b，存储第二个整数 
	函数返回值：c（整型） 
*/
int multiple(int a,int b)
{
	int c;
	c = b % a;
	return c;
 } 
int main()
{
	int i;
	for(i=1;i<=3;i++)
	{
		printf("Enter two integers:");
		int a,b,c;	
		scanf("%d %d",&a,&b);
		if(multiple(a,b)==0)
			printf("%d is a multiple of %d\n",b,a);
		else	
			printf("%d is not a multiple of %d\n",b,a);	
	}
	return 0;
 } 
