#include<stdio.h>
int main()
{
	int m,n=1;
	printf("m=%d\n",m=n++);
	printf("n=%d\n",n);

	printf("m=%d\n",m=++n);
	printf("n=%d\n",n);
	
	printf("m=%d\n",m=n--);
	printf("n=%d\n",n);

	printf("m=%d\n",m=--n);
	printf("m=%d\n",n);
	return 0;
}

