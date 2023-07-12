#include <stdio.h>
/*
	函数功能：计算每位顾客收费额
	函数入口参数：浮点型hour，存储停车时间 	              
	函数返回值：停车费（浮点型） 
*/
float CalculateCharges(float hour) 
{
	float charge;
	if(hour<=3)
	{
		charge=2;
	}
	else if(hour>3&&hour<=19)
	{
		charge=(hour-3)*0.5+2;
	}
	else
	{
		charge=10;
	}
	return charge;
}
int main()
{
	float hour1,hour2,hour3,charge1,charge2,charge3,sum1,sum2;
	printf("Enter the hours parked for 3 cars:");
	scanf("%f %f %f",&hour1,&hour2,&hour3);	
	printf("Car\t Hours\t Charge\n");
	charge1=CalculateCharges(hour1);
	charge2=CalculateCharges(hour2);
	charge3=CalculateCharges(hour3);
	int i=1;
	sum1=hour1+hour2+hour3;
	sum2=charge1+charge2+charge3;
	printf("%d\t %.1f\t %.2f\n",i++,hour1,charge1);
	printf("%d\t %.1f\t %.2f\n",i++,hour2,charge2);
	printf("%d\t %.1f\t %.2f\n",i++,hour3,charge3);	
	printf("TOTAL\t %.1f\t %.2f",sum1,sum2);
	return 0;
}
