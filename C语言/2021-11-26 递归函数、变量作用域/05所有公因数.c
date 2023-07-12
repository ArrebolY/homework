#include<stdio.h>
int main()
{
	int sub,a,b;
	printf("Please input a and b:");
	scanf("%d%d",&a,&b);

	while((sub=CommonFactors(a, b)) > 0)
	{
		static int counter=1;
		printf("Common factor %d is %d\n",counter++,sub);
	}
	return 0;
}
int CommonFactors(int a, int b)
{
	static int num1=-1,num2=-1,result;
	if(a<0||b<0)
		return -1;
	if(num1!=a||num2!=b)
	{
		num1=a;
		num2=b;
		result=a>b?b:a;
	}	
	while(result>0)
	{
		if(a%result==0&&b%result==0)
		{
			return result--;
		}
		result--; 
	}	
	return -1;
 } 
