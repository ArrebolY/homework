#include <stdio.h>
/*
	�������ܣ�������������������С������
	������ڲ���������a���洢��һ�������� 
				  ����b���洢�ڶ��������� 
	��������ֵ��c(���ͣ�
*/ 
int MinCommonMultiple(int a,int b)
{
	int i,c;
	for(i=1;i>0;i++)
	{
		if(i%a==0&&i%b==0)
		{
			c=i;
			break;
		}
	}
	return c;
 } 
int main()
{
	int a,b,result;
	printf("input a,b:");
	scanf("%d,%d",&a,&b);
	result=MinCommonMultiple(a,b);
	printf("MinCommonMultiple=%d",result);
	return 0;
}
