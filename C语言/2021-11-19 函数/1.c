#include<stdio.h>
#include<math.h>
/*
	�������ܣ���������б�߳���
	������ڲ���:˫������a���洢��һ��ֱ�Ǳ�
		         ˫������b���洢�ڶ���ֱ�Ǳ�
    ��������ֵ��б�߳��ȣ�˫�����ͣ�
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
   	
