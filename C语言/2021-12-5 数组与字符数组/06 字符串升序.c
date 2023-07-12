#include <stdio.h>
#include <string.h>
int main()
{
	char a[5][80];
	int i,j;
	char b[80];
	for(i=0;i<5;i++)
   	{
   		scanf("%s",&a[i]);
	}	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
    	{
    		if(strcmp(a[j],a[j+1])>0)
    		{
    			strcpy(b,a[j+1]);
    			strcpy(a[j+1],a[j]);
    			strcpy(a[j],b);
			}
		}  	
	}
	for(i=0;i<5;i++)
	printf("%s\n",a[i]);
	return 0;
}
