#include <stdio.h>
/*
�������ܣ� ��n�����е����ֵ����Сֵ���������±�λ��
������ڲ����� ��������num���洢n������;���ͱ���n����ʾ����Ԫ�ظ���
�������ڲ����� ����ָ�����pMaxPos��ָ��ĵ�ַ��Ԫ�洢���ֵ�������е��±�λ��; 
			   ����ָ�����pMax��ָ��ĵ�ַ��Ԫ�洢���ֵ;
			   ����ָ�����pMinPos��ָ��ĵ�ַ��Ԫ�洢��Сֵ�������е��±�λ��;
			   ����ָ�����pMin��ָ��ĵ�ַ��Ԫ�洢��Сֵ
��������ֵ�� ��
*/
void FindMaxMin(int num[], int n,int *pMax, int *pMaxPos, int *pMin, int *pMinPos) 
{
	int * p;
    *pMax=*pMin=*num;
	for (p=num;p<num+n;p++)
	{
		if (*p>*pMax)
		{
			*pMax=*p;			
		}
		else if (*p<*pMin)
		{
			*pMin=*p;			
		}
	}
	int i,max,min;
	max=num[0];	//����num[0]Ϊ���ֵ 
	min=num[0];	//����num[0]Ϊ��Сֵ 
	*pMaxPos=0;
	*pMinPos=0;
	for(i=0;i<n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
			*pMaxPos=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(num[i]<min)
		{
			min=num[i];
			*pMinPos=i;
		}		
	}
	printf("Max=%d,Position=%d,",*pMax,*pMaxPos);
    printf("Min=%d,Position=%d ",*pMin,*pMinPos);
}
int main()
{
	int num[10],i,n=1,Max,MaxPos,Min,MinPos;
	printf("Input 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		n++;
	}
	FindMaxMin(num,n,&Max,&MaxPos,&Min,&MinPos);
}
