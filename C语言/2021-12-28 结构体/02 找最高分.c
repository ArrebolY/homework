#include <stdio.h>
struct student
{
	int name[45];
	char sex;
	int age;
	float score;
}stu[45];
int main()
{ 
	int n,i;
	printf("������ѧ������:"); 
	scanf("%d",&n);
	int max=0;
	for(i=0;i<n;i++)
	{
		printf("\n�������%d��ѧ��������:",i+1);
		scanf("%s",&stu[i].name); 
		printf("�������%d��ѧ�����Ա�(F or M):",i+1);
		scanf(" %c",&stu[i].sex);
		printf("�������%d��ѧ�������䣺",i+1);
		scanf("%d",&stu[i].age);
		printf("�������%d��ѧ���ĳɼ���",i+1);
		scanf("%f",&stu[i].score);
		if(stu[max].score<stu[i].score) 
		{
			max=i;
		}	
	}
	printf("Name\t Sex\t Age\t Score\n");
	printf("%s\t %c\t %d\t %.1f\t",stu[max].name,stu[max].sex,stu[max].age,stu[max].score);	

	return 0;
}
