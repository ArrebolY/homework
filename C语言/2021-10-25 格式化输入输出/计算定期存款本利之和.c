#include<stdio.h>
#include<math.h>

int main()
{
	int n, capital;
	float rate=0.0225,deposit;
	
	printf("请输入存款期n和本金capital:");
	scanf("%d%d",&n,&capital);
	deposit=pow(1+rate,n)*capital;
	printf("存款本利之和deposit=%f",deposit);
	
	return 0; 
}
