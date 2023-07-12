#include<stdio.h>
int main()
{
	int a=20,b=10,c=15,d=5,e;
	e = (a+b)*c/d;
	printf("(a+b)*c/d=%d\n",e);
	
	e=((a+b)*c)/d;
    printf("((a+b)*c)/d=%d\n",e);
    
    e=(a+b)*(c/d);
    printf("(a+b)*(c/d)=%d\n",e);
    
    e=a+(b*c)/d;
    printf("a+(b*c)/d=%d\n",e);
    return 0;
}
