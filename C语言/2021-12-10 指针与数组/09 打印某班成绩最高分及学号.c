#include <stdio.h>
/*
	�������ܣ�������߷ּ���߷�ѧ����ѧ��
    ������������������score�����ѧ���ĳɼ�
              ����������num�����ѧ����ѧ��
		      ������ָ�����pMaxNum��������������߷�ѧ����ѧ��
	��������ֵ����߷�
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
			maxscore=score[i];//��߷� 
			*pMaxNum=num[i];//��߷�ѧ�� 
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

