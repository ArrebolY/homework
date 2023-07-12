#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n=3,count=1;
	float x,term,a=1,b=1,c;
	printf("please input x:");
	scanf("%f",&x);	
	float sum=x;
	do{
		for(i=1;i<=n;i++)
		{
			a*=x;
		}
		for(j=1;j<=n;j++)
		{
			b*=j;
		}		
		c=pow(-1,count);
		term=c*(a/b);
		sum+=term;
		n+=2;
		count+=1;
		a=1;
		b=1;
	}while(fabs(term)>=1e-5); 
	printf("sin(x)=%.3f,count=%d",sum,count);
	return 0;	
}
