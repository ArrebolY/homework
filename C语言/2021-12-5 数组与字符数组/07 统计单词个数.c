#include <stdio.h>
int main()
{
	char str[1024];
	int i,flag=0,count=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			flag=0;
		else if(flag==0)
		{
			flag=1;
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
