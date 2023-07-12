#include <stdio.h>
void change(int *a,int *b)//交换位置 
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int num[100],n,i;
	int M,m;
	int max,min;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d data:",n);
	for(i=0;i<n;i++)//输入 
	{
		scanf("%d",&num[i]);
	}	
	printf("\n");
	printf("orgin:");
	for(i=0;i<n;i++)//打印原始数组 
	{
		printf("%d\t",num[i]);
	}
	max=num[0]; 
	min=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]>=max)
		{
			max=num[i];
		}
		else if(num[i]<=min)
		{
			min=num[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(num[i]==max)
		{
			M=i;
		}
		else if(num[i]==min)
		{
			m=i;
		}
	}
	change(&num[M],&num[0]);
	change(&num[m],&num[n-1]);
	printf("\nmax=%d\n",num[0]);
	printf("min=%d\n\n",num[n-1]);
	printf("sorted:"); 
	for(i=0;i<n;i++)
	{
		printf("%d\t",num[i]);
	}
	return 0;
}

