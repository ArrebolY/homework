#include <stdio.h>
#include <string.h>
int main()
{
	int i,n;
	char str[100],*p,*q;
	printf("Input string:");
	gets(str);
	n=strlen(str);
	p=str;
	q=str+n-1;
	for(i=0;i<n/2;i++)
	{		
      	if(*p!=*q)
	  	{ 
	    	printf("No!\n");
	    	break;
	  	}
	  	else
	  	{
	  		printf("Yes!\n");
	  		break;
		}
	}	
}
