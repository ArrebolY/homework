#include <stdio.h>
/*
	�������ܣ��������������������Լ��
	������ڲ���������a���洢��һ������
	              ����b���洢�ڶ������� 
	��������ֵ��b 
*/
int MaxCommonFactor(int a,int b)
{
	if(a%b==0)
	{
		return b;
	}
	else
		return MaxCommonFactor(b,a%b);		
}
int main()
{
	printf("Input a,b:");
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=MaxCommonFactor(a,b);
	printf("MaxCommonFactor=%d",c);
	return 0;
}
