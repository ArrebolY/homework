#include <stdio.h>
#define STU 30
#define COURSE 3
void Input(long num[],int score[][COURSE],int n)
/* �������ܣ�����ĳ��ѧ����ĩ�������ſγ̳ɼ�
   ��������������������num�����ѧ��ѧ��
             ��������score�����ѧ���ɼ�
			 ���ͱ���n�����ѧ������
   ��������ֵ����
*/
{
	int i,j;
	printf("please enter num and score :\n");
	for(i=0;i<n;i++)
	{
		scanf("%ld",&num[i]);
		for(j=0;j<COURSE;j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
}
void GetSumAver(int score[][COURSE],int n,int sum[],float aver[])
/* �������ܣ�����ÿ��ѧ�����ֺܷ�ƽ����
   ���������� ��������score�����ѧ���ɼ�
			  ���ͱ���n�����ѧ������
		      ��������sum������õ���ÿ��ѧ�����ܷ�
			  ʵ������aver������õ���ÿ��ѧ����ƽ����
   ��������ֵ����
*/
{
	int i,j;
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		for(j=0;j<COURSE;j++)
		{
			sum[i]+=score[i][j];
		}
		aver[i]=(float)sum[i]/COURSE;
	}
}
void Sort(long num[],int score[][COURSE],int n,int sum[],float aver[])
/* �������ܣ����ֳܷɼ��ɸߵ����ų��ɼ�������
   ��������������������num�����ѧ��ѧ��
             ��������score�����ѧ���ɼ�
			 ���ͱ���n�����ѧ������
			 ��������sum�����ÿ��ѧ�����ܷ�
			 ʵ������aver�����ÿ��ѧ����ƽ����
   ��������ֵ����
*/
{
	int i,j,k,m;
	long temp1;
	int temp2;
	float temp3;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(sum[j]>sum[k])
			{
				k=j;
			}
		}
		if(k!=0)
		{
			temp1 = num[k]; num[k] = num[i]; num[i] = temp1;
			temp2 = sum[k]; sum[k] = sum[i]; sum[i] = temp2;
			temp3 = aver[k]; aver[k] = aver[i]; aver[i] = temp3;
			for(m=0;m<COURSE;m++)
			{
				temp2=score[k][m];
				score[k][m]=score[i][m];
				score[i][m]=temp2;
			}
		}
	}		
}
void Print(long num[],int score[][COURSE],int n,int sum[],float aver[])
/* �������ܣ� ��ӡ���α�����ڰ���ѧ����š����Ʒ������ֺܷ�ƽ����
   ���������� ����������num�����ѧ��ѧ��
				��������score�����ѧ���ɼ�
				���ͱ���n�����ѧ������
				��������sum�����ÿ��ѧ�����ܷ�
				ʵ������aver�����ÿ��ѧ����ƽ����
   ��������ֵ����
*/
{
	int i,j;
	printf("num\t score1\t score2\t score3\t sum\t aver\n");
	for(i=0;i<n;i++)
	{
		printf("%ld\t",num[i]);
		for(j=0;j<COURSE;j++)
		{
			printf("%d\t",score[i][j]);
		}
		printf("%d\t %.2f\n",sum[i],aver[i]);
	}
}
int  Search(long num[], int n, long x)
/* �������ܣ���ѧ��������˳�����ѧ����ѧ��
   ��������������������num�����ѧ��ѧ��
             ���ͱ���n�����ѧ������
		     �����ͱ���x����Ŵ�����ѧ����ѧ��
   ��������ֵ���ҵ�ʱ������ѧ��ѧ����ѧ�������е��±�λ�ã����򷵻�ֵ-1
*/
{
	int i;
	for(i=0;i<n;i++)
	{
		if(num[i]==x)
			return i;
	}
	return -1;
}
void Input(long num[],int score[][COURSE],int n);
void GetSumAver(int score[][COURSE],int n,int sum[],float aver[]);
void Sort(long num[],int score[][COURSE],int n,int sum[],float aver[]);
void Print(long num[],int score[][COURSE],int n,int sum[],float aver[]);
int  Search(long num[], int n, long x);

int main()
{
	long num[STU],x;
	int score[STU][COURSE],sum[STU],n,pos;
	float aver[STU]; 
	printf("input the total number of the students(<30):");
	scanf("%d",&n);
	Input(num,score,n);
	GetSumAver(score,n,sum,aver);
	Sort(num,score,n,sum,aver);
	Print(num,score,n,sum,aver); 
	Search(num,n,x);
	
	printf("Please enter searching number:");
	scanf("%ld", &x);
	pos = Search(num, n, x); 
	if (pos != -1)
	{
		printf("num\t score1\t score2\t score3\t sum \t aver\n");
		printf("%d\t %ld\t %d\t %d\t %d\t %d\t %.2f\n",pos+1,num[pos], score[pos][0],score[pos][1], score[pos][2], sum[pos],aver[pos]);
	}
	else
	{
	printf("Not found!\n");
	}
}

 


