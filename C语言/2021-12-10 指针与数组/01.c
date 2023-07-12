#include <stdio.h>
#define SIZE 10
int main()
{
	float numbers[20]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9}; 
	float *nPtr;
	//int i;
	nPtr=&numbers[5];
	//nPtr=numbers;
	//for(i=0;i<SIZE;i++)
	//{
		printf("%.1f\n",nPtr[4]);
		//printf("%.1f\n",*(numbers+4));
		//printf("%.1f\n",*(nPtr+8));
		//printf("%.1f\n",numbers[4]);
	//}
	return 0;
}
