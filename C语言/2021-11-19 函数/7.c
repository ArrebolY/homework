#include <stdio.h>
/*
	�������ܣ��������������������Լ��
	������ڲ���������a���洢��һ������
	              ����b���洢�ڶ������� 
	��������ֵ��a
*/
int MaxCommonFactor(int a,int b)
{
	while (a>0&&b>0)
	{
		if(a>b)
		{
			a-=b;
		}
		else if(a<b)
		{
			b-=a;
		}	
		else
			break;
	}
	return a;
}
int main()
{
	int a,b;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	printf("MaxCommonFactor=%d",MaxCommonFactor(a,b));
	return 0;
}
