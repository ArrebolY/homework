#include <stdio.h>
struct student
{
	char name[45];
	int number;
	float score1;
	float score2;
}stu[45];
void max(struct student stu[],int n)
{
	int i,num1,num2,count1,count2;
	float max1,max2;
	max1=stu[0].score1;
	max2=stu[0].score2;
	for(i=0;i<n;i++)
	{
		if(stu[i].score1>=max1)
		{
			max1=stu[i].score1;
			num1=i;
			count1=1;
		}		
		if(stu[i].score2>=max2)
		{
			max2=stu[i].score2;
			num2=i;
			count2=2;
		}		
	}
	printf("最高分为：\n");
	if(max1>max2)
	{
		printf("MaxScore=%.1f,Name is %s,No=%d,Score.No=%d",max1,stu[num1].name,num1+1,count1);
	}
	else
	{
		printf("MaxScore=%.1f,Name is %s,No=%d,Score.No=%d",max2,stu[num2].name,num2+1,count2);	
	}
}
void average(struct student stu[],int n)
{
	float sum1,sum2,ave1,ave2;
	int i;
	sum1=0;
	sum2=0;
	for(i=0;i<n;i++)
	{
		sum1+=stu[i].score1;
		sum2+=stu[i].score2;
	}
	ave1=sum1/n;
	ave2=sum2/n;
	printf("\n两门课程平均分为：\n");
	printf("ave1=%.1f,ave2=%.1f\n",ave1,ave2);
	printf("两门课程均低于平均分的学生姓名和学号：\n");
	printf("Name\t No\n");
	for(i=0;i<n;i++)
	{
		if(stu[i].score1<ave1&&stu[i].score2)
		{
			printf("%s\t %d\n",stu[i].name,stu[i].number);
		}
	}
}
void paixu(struct student stu[],int n)
{
	printf("对编号1的课程从高分到低分排序:\n"); 
	printf("Name\t No\t Score1\t Score2\n");
	struct student temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			if(stu[j].score1>stu[j-1].score1)
			{
				temp=stu[j-1];
				stu[j-1]=stu[j];
				stu[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\t %d\t %.1f\t %.1f\n",stu[i].name,stu[i].number,stu[i].score1,stu[i].score2);
	}
}
int main()
{ 
	int n,i;
	printf("请输入学生人数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n请输入第%d个学生的姓名:",i+1);
		scanf("%s",&stu[i].name);
		printf("请输入第%d个学生的学号:",i+1);
		scanf("%d",&stu[i].number);
		printf("请输入第%d个学生的第一门课程成绩:",i+1);	
		scanf("%f",&stu[i].score1);
		printf("请输入第%d个学生的第二门课程成绩:",i+1);
		scanf("%f",&stu[i].score2);
	} 
	printf("\nName\t No\t Score1\t Score2\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t %d\t %.1f\t %.1f\n",stu[i].name,stu[i].number,stu[i].score1,stu[i].score2);
	}
	max(stu,n);
	average(stu,n); 
	paixu(stu,n);
	return 0;
}
