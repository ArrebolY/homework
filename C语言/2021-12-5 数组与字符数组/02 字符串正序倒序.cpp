#include <stdio.h>
#include <string.h>
int main()
{
	char str[100],t[100];
	printf("please input the string str:");
	scanf("%s",str);
	int n,i;
	n=strlen(str);
	for (i=0;i<n;i++)
	{
		t[i] = str[i];
	}
	for (i=0;i<n;i++)
	{
		t[n+i] = str[n-i-1];
	}
	t[2*n]='\0';
	printf("the result is:%s",t);
 } 
