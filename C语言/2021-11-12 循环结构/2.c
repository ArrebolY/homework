//¼ÆËã1!+2!+3!+4!+¡­+10£¡µÄÖµ
#include<stdio.h>
int main()
{
	int i,j=1,sum=0;
	for(i=1;i<=10;i++)
	{
		j *= i;		
		sum += j;
  	}	
	printf("%d",sum);
}
