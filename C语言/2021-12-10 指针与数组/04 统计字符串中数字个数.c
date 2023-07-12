#include <stdio.h>
void numbers(char *str,int i)
{
	while(*str!='\0')
	{
		if(*str>='0'&&*str<='9')
		{
			i++;
		}
		str++;
	}
	printf("there are %d numbers in ",i);
}
int main()
{
	char str[20];
	int i;
	printf("please input a string.\n");
	printf("The string can store 20 character:");
	gets(str);
	numbers(str,i);
	puts(str);
}
