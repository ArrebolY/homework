#include <stdio.h>
#define CLASS 3
#define STU 4
/*
�������ܣ���������m��n�еĶ�ά������Ԫ�ص����ֵ����ָ�������ڵ������±�ֵ
������ڲ���������ָ�����p��ָ��һ����ά��������ĵ��е���
            ���ͱ���m����ά�������������
            ���ͱ���n����ά�������������
�������ڲ���������ָ�����pRow��ָ������Ԫ�����ֵ���ڵ���
            ����ָ�����pCol��ָ������Ԫ�����ֵ���ڵ���
��������ֵ������Ԫ�ص����ֵ
*/
int  FindMax(int *p, int m, int n, int *pRow, int *pCol)
{  
	int i,j,maxScore;
	maxScore=p[0];
	*pRow=0;
	*pCol=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i*n+j]>maxScore)
			{
				maxScore=p[i*n+j];//��ǰ���ֵ
				*pRow=i;//���±� 
				*pCol=j;//���±� 
			}
		}
	}
	return maxScore;
}
int FindMax(int *p, int m, int n, int *pRow, int *pCol);
void main()
{
	int score[CLASS][STU], i, j, maxScore, row, col;
	printf("Please enter score:\n");
	for (i=0; i<CLASS; i++)
	{
		for (j=0; j<STU; j++)
		{
				scanf("%d",&score[i][j]);     /*����ѧ���ɼ�*/
		}
	}
	/*������߷ּ���ѧ�����ڰ�ź�ѧ��*/
	maxScore=FindMax(*score,CLASS,STU,&row,&col); 
	printf("maxScore = %d, class =%d, number =%d\n",maxScore,row+1,col+1);
}


 
