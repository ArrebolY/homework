//个位数为6且能被3整除的五位数共有多少
#include<stdio.h>
int main()
{
	int i,t=0;
	for(i=10000;i<=99999;i++)
	  if(i%3==0 && i%10==6)
		t++;
		printf("%d",t);
	  
} 
