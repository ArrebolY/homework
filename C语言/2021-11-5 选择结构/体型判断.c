//�㷨һ 
#include<stdio.h>
#include<math.h>
int main()
{
	int w;
	float h,t;
	printf("�������������(kg)�����(m):");
	scanf("%d %f",&w,&h);
	t = w/pow(h,2);
	if(t<18)
	{
		printf("���ǵ�����");
	}
	if(t>18 && t<25)
	{
		printf("������������");
	}
	if(t>25 && t<27)
	{
		printf("���ǳ�������"); 
	}
	if(t>27)
	{
		printf("���Ƿ���"); 
	}
	return 0;
}

//�㷨�� 
#include<stdio.h>
#include<math.h>
int main ()
{
	int w;
	float h,t;
	printf("�������������(kg)�����(m):");
	scanf("%d %f",&w,&h);
	t = w/pow(h,2);
	if(t<18)
	{
		printf("���ǵ�����");
	}
	if(t>18)
	{
		if(t<25)
		{
			printf("������������"); 
		}
		if(t>25)
		{
			if(t<27)
			{
			    printf("���ǳ�������");
			}
			if(t>27)
			{
				printf("���Ƿ���"); 
			}			
		}		
	}
	return 0;
 }
 
//�㷨��
#include<stdio.h>
#include<math.h>
int main ()
{
	int w;
	float h,t;
	printf("�������������(kg)�����(m):");
	scanf("%d %f",&w,&h);
	t = w/pow(h,2);
	if(t<18)
	{
		printf("���ǵ�����");
	}
	else 
	{
		if(t<25)
		{
			printf("������������"); 
		}
		else
		{
			if(t<27)
			{
			    printf("���ǳ�������");
			}
			else
			{
				printf("���Ƿ���"); 
			}			
		}		
	}
	return 0;
}


