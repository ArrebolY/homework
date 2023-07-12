#include <stdio.h>
/*
	函数功能：计算最高分及最高分学生的学号
    函数参数：整型数组score，存放学生的成绩
              长整型数组num，存放学生的学号
		      长整型指针变量pMaxNum，存放求出来的最高分学生的学号
	函数返回值：最高分
*/
int FindMax(int score[], long num[], int n, long *pMaxNum)
{
	int i,maxscore;
	maxscore=score[0];
	pMaxNum=&num[0];
	for(i=1;i<n;i++)
	{
		if(score[i]>maxscore)
		{
			maxscore=score[i];//最高分 
			*pMaxNum=num[i];//最高分学号 
		}
	}
	printf("MaxScore=%d, maxNum=%ld\n",maxscore,*pMaxNum);
	return maxscore;
} 
int main()
{
	int n,i;
	int score[40],MaxScore;
	long num[40],MaxNum;
	printf("Please enter total number:");
	scanf("%d",&n);
	printf("Please enter the number and score:\n");
	for(i=0;i<n;i++)
	{
		scanf("%ld %d",&num[i],&score[i]);
	}
	MaxScore=FindMax(score,num,n,&MaxNum);
}

