#include <stdio.h>
/*
	�������ܣ��ж�һ�����ǲ�����һ�����ı���
	������ڲ���������a���洢��һ������
	              ����b���洢�ڶ������� 
	��������ֵ��c�����ͣ� 
*/
int multiple(int a,int b)
{
	int c;
	c = b % a;
	return c;
 } 
int main()
{
	int i;
	for(i=1;i<=3;i++)
	{
		printf("Enter two integers:");
		int a,b,c;	
		scanf("%d %d",&a,&b);
		if(multiple(a,b)==0)
			printf("%d is a multiple of %d\n",b,a);
		else	
			printf("%d is not a multiple of %d\n",b,a);	
	}
	return 0;
 } 
