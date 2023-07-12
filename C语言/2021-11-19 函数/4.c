#include <stdio.h>
/*
	函数功能：计算组合数
	函数入口参数：整型m
	函数返回值：sum(双浮点型）
*/
double p(int m)
{
	int i;
	double sum=1;
	for(i=1;i<=m;i++)
	{
		sum=sum*i;
	}
	return sum;
 } 
int main()
{
	int m,k;
	double result;
	printf("please input m,k(m>=k>0):");
	scanf("%d %d",&m,&k);
	if(m>=k>0)
	{
		result=p(m)/(p(k)*p(m-k));
		printf("p=%.0f",result);
	}		
	else
	{
		printf("wrong number");
	}	
	return 0;
 } 
