#include <stdio.h>
#include <string.h> 
void printstring(char *a,char *b,int m,int n)
{
	int i;
	for(i=0;i<m;i++)
	{
		b[i]=a[n+i];
	}
}
int main()
{
	int m,n,a,i;
	char str[20],temp[20];
	printf("please input a string.\n");
	printf("The string can store 20 character:");
	gets(str);
	a=strlen(str);
	printf("Input n,m<n+m<=%d:",a);
	scanf("%d %d",&n,&m);
	for(i=0;i<a;i++)
	{
		if(m+n>a)
		{
			printf("Input n,m<n+m<%d=:",a);
			scanf("%d %d",&n,&m);
		}
		else
		{
			break;
		}
	}
	printstring(str,temp,m,n);
	printf("%s",temp);
	return 0;
}
