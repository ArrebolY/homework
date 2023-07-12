#include<stdio.h>
#include<math.h>
/*
	函数功能：求三角形斜边长度
	函数入口参数:双精度型a，存储第一条直角边
		         双精度型b，存储第二条直角边
    函数返回值：斜边长度（双精度型）
*/
double Hypotenuse(double a,double b)
{
	double c;
	c=sqrt(pow(a,2)+pow(b,2));
	return c;
}
int main()
{
	int i;
	for(i=1;i<=3;i++)
	{	
		printf("Enter the sides of the triangle:");
		double a,b;
		scanf("%lf %lf",&a,&b);	
		printf("Hypotenuse :%.1lf\n",Hypotenuse(a,b)); 
	}
	return 0;
 } 
   	
