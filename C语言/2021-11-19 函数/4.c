#include <stdio.h>
/*
	�������ܣ����������
	������ڲ���������m
	��������ֵ��sum(˫�����ͣ�
*/
double p(int m)
{
	int i;
	double sum=1;
	for(i=1;i<=m;i++)
	{
		sum=sum*i;
	}
	return sum;
 } 
int main()
{
	int m,k;
	double result;
	printf("please input m,k(m>=k>0):");
	scanf("%d %d",&m,&k);
	if(m>=k>0)
	{
		result=p(m)/(p(k)*p(m-k));
		printf("p=%.0f",result);
	}		
	else
	{
		printf("wrong number");
	}	
	return 0;
 } 
