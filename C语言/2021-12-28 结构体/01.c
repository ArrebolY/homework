#include <stdio.h>
typedef struct part
{
	int partNumber;
	char partName[25];
}Part;
Part a;
int main()
{
	struct part b[10];
	struct part *ptr;
	scanf("%d %s",&a.partNumber,&a.partName);
	b[2]=a;
	ptr=&b[2];
	printf("%d %s",ptr->partNumber,ptr->partName);
	return 0;
}
