#include <stdio.h>
#include <string.h>
int main()
{
	int i,n;
    char str[80];
    scanf("%s",str);
    n = strlen(str);       
	for(i = 0;i<n/2;i ++ )
	{		
      	if(str[i] != str[n-1-i])
	  	{ 
	    	printf("No!\n");
	    	break;
	  	}
	}	
	if(i == n/2)
    	{
    		printf("Yes!\n");
		}
}
