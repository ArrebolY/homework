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
	printf("请输入学生人数:"); 
	scanf("%d",&n);
	int max=0;
	for(i=0;i<n;i++)
	{
		printf("\n请输入第%d个学生的姓名:",i+1);
		scanf("%s",&stu[i].name); 
		printf("请输入第%d个学生的性别(F or M):",i+1);
		scanf(" %c",&stu[i].sex);
		printf("请输入第%d个学生的年龄：",i+1);
		scanf("%d",&stu[i].age);
		printf("请输入第%d个学生的成绩：",i+1);
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
