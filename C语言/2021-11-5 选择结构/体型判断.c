//算法一 
#include<stdio.h>
#include<math.h>
int main()
{
	int w;
	float h,t;
	printf("请输入你的体重(kg)和身高(m):");
	scanf("%d %f",&w,&h);
	t = w/pow(h,2);
	if(t<18)
	{
		printf("你是低体重");
	}
	if(t>18 && t<25)
	{
		printf("你是正常体重");
	}
	if(t>25 && t<27)
	{
		printf("你是超重体重"); 
	}
	if(t>27)
	{
		printf("你是肥胖"); 
	}
	return 0;
}

//算法二 
#include<stdio.h>
#include<math.h>
int main ()
{
	int w;
	float h,t;
	printf("请输入你的体重(kg)和身高(m):");
	scanf("%d %f",&w,&h);
	t = w/pow(h,2);
	if(t<18)
	{
		printf("你是低体重");
	}
	if(t>18)
	{
		if(t<25)
		{
			printf("你是正常体重"); 
		}
		if(t>25)
		{
			if(t<27)
			{
			    printf("你是超重体重");
			}
			if(t>27)
			{
				printf("你是肥胖"); 
			}			
		}		
	}
	return 0;
 }
 
//算法三
#include<stdio.h>
#include<math.h>
int main ()
{
	int w;
	float h,t;
	printf("请输入你的体重(kg)和身高(m):");
	scanf("%d %f",&w,&h);
	t = w/pow(h,2);
	if(t<18)
	{
		printf("你是低体重");
	}
	else 
	{
		if(t<25)
		{
			printf("你是正常体重"); 
		}
		else
		{
			if(t<27)
			{
			    printf("你是超重体重");
			}
			else
			{
				printf("你是肥胖"); 
			}			
		}		
	}
	return 0;
}


