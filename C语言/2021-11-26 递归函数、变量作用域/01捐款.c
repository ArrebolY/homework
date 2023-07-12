#include <stdio.h>
float amount(int a)//每笔捐款扣除了17%的操作费用后的金额
{
	float result;
	result = a-(a * 0.17);
	return result;
}
float total(float x)//目前慈善基金中的总金额
{
	static float sum=0;	
	sum+=x;		
	return sum;
}
int main()
{
	
	int i,num;
	float x;		
 	for(i=1;i>0;i++)
 	{
 		printf("Enter donation amount (0 or less to exit):");
		scanf("%d",&num);
		x=amount(num); 
		printf("After expenses:$%.2f\n",amount(num));
		printf("Total raised:$%.2f\n",total(x));	
	 }
			
	return 0;
}
