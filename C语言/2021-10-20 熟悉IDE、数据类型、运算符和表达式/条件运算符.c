#include<stdio.h>
int main()
{
	int a,b;
	printf("输入a,b的值："); 
	scanf("%d,%d",&a,&b);
	a>b ? printf("a比b大\n"): printf("a不比b大\n");
	return 0;
	 
}
