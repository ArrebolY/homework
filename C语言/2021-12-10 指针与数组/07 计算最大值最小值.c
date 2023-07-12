#include <stdio.h>
/*
函数功能： 求n个数中的最大值和最小值及其所在下标位置
函数入口参数： 整型数组num，存储n个整数;整型变量n，表示数组元素个数
函数出口参数： 整型指针变量pMaxPos，指向的地址单元存储最大值在数组中的下标位置; 
			   整型指针变量pMax，指向的地址单元存储最大值;
			   整型指针变量pMinPos，指向的地址单元存储最小值在数组中的下标位置;
			   整型指针变量pMin，指向的地址单元存储最小值
函数返回值： 无
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
	max=num[0];	//假设num[0]为最大值 
	min=num[0];	//假设num[0]为最小值 
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
