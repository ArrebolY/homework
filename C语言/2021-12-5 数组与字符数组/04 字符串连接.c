#include <stdio.h>
void MyStrcat(char dstStr[], char srcStr[])
{
	int i,j;
	for(i=0;dstStr[i]!='\0';i++);
	 
	for(j=0;srcStr[j]!='\0';j++)
	{
		dstStr[i+j]=srcStr[j]; 
	}
}
int main()
{
	char str1[100],str2[100];
	scanf("%s",str1);
	printf("\n");
	scanf("%s",str2);
	MyStrcat(str1,str2);
	printf("%s",str1);
	return 0;
 } 
