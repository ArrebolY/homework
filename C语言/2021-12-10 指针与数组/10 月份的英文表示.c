#include<stdio.h>
int main()
{
	int n,i=0;
	const char *monthName[13]={"Illegal month","January","February","March","April","May","June","July","August","September","Octuber","November","December"};
	printf("Iput month number:");
	scanf("%d",&n);
	if(n<1||n>12)
	    printf("%s",*(monthName+0));
	else
	    printf("month %d is %s",n,*(monthName+n));
}
