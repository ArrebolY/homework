//求s=1/(1+2+3)-2/(2+3+4)+3/(3+4+5)-4/(4+5+6)+……的前20项之和
#include<stdio.h>
#include<math.h>
int main()
{
	float i,j,m,sum=0;
	for(i=1;i<=20;i++)
	{
		j=pow(-1,i+1);
		m=j*(i/(3*(i+1)));
		sum+=m;			
	}
	printf("%f",sum);
	return 0;
 } 
