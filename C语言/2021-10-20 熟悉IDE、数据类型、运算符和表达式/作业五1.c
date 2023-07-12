#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d=4,e=5;
	printf("e==d>a+d/b的值为 %d\n",e==d>a+d/b);
	printf("a+d/b>d==e的值为 %d\n",a+d/b>d==e);
	printf("4&&0||2+2/2的值为 %d\n",4&&0||2+2/2);
	printf("(2+2)/2||0&&4的值为 %d\n",2+2/2||0&&4);
	return 0;
	
}
