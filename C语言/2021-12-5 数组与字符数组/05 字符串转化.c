#include <stdio.h>
#include <string.h> 
#include <math.h>
int convertToInt(char str[30])
{
	int i,sum=0;
	int num[30];
	int a=strlen(str);
	if(str[0]=='-')
	{
		for(i=1;i<a;i++)
		{
			num[i-1]=str[i]-'0';
		}
		for(i=0;i<a-1;i++)
		{
			sum+=num[i]*pow(10,a-i-2);
		}
		return -sum;
	}
	else
	{
		for(i=0;i<a;i++)
		{
			num[i]=str[i]-'0';
		}
		for(i=0;i<a;i++)
		{
			sum+=num[i]*pow(10,a-i-1);
		}
		return sum;
	}
}
int main()
{
	char num[30];
	int a;
	scanf("%s",&num);
	
	printf("%d",convertToInt(num));
}
