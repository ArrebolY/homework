#include <stdio.h>
void deletechar(char str[],int n)
{
	char *p;
	int i;
	p=str;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=n)
		{
			*(p++)=str[i];
		}
		else
		{
			*p=str[i];
		}	
	}
	*p='\0';
	printf("%s",str);
 } 
int main()
{
	char str[20],n;
	int i;
	printf("Please input a string.\n");
	printf("the string can store 20 character:");
	gets(str);
	printf("Please input the character you want to delete:");
	scanf("%c",&n);
	printf("After deleting, the string is ");
	deletechar(str,n);
	return 0;
}
