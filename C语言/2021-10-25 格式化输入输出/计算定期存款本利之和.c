#include<stdio.h>
#include<math.h>

int main()
{
	int n, capital;
	float rate=0.0225,deposit;
	
	printf("����������n�ͱ���capital:");
	scanf("%d%d",&n,&capital);
	deposit=pow(1+rate,n)*capital;
	printf("����֮��deposit=%f",deposit);
	
	return 0; 
}
