#include <stdio.h>
float amount(int a)//ÿ�ʾ��۳���17%�Ĳ������ú�Ľ��
{
	float result;
	result = a-(a * 0.17);
	return result;
}
float total(float x)//Ŀǰ���ƻ����е��ܽ��
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
