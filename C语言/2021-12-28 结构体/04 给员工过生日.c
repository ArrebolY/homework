#include <stdio.h>
typedef struct
{
	char name[100];
	int number;
	struct date
	{
		int year;
		int month;
		int day;
	}date;
}p;
int input(p *staff) 
{
	int i,n;
	printf("������Ա��������");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("������Ա��������");
		scanf("%s",&staff[i].name);
		printf("������Ա�����ţ�");
		scanf("%d",&staff[i].number);
		printf("������Ա�����գ�");
		scanf("%d%d%d",&staff[i].date.year,&staff[i].date.month,&staff[i].date.day);
	}
	return n;
}
int main()
{
	p staff[100];
	int i,n,m,d;
	input(staff);
	printf("���������Ա���ĳ����¡��գ�");
	scanf("%d %d",&m,&d);
	printf("Name\t Num\t Year\t Month\t Day\n");
	for(i=0;i<n;i++)
	{
		if(staff[i].date.month==m&&staff[i].date.day==d)
		{
			printf("%s\t %d\t %d\t %d\t %d\n",staff[i].name,staff[i].number,staff[i].date.year,staff[i].date.month,staff[i].date.day);
		}	
	}
	return 0; 
}
