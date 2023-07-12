#include <stdio.h>
#include <string.h>
#define N 30
int main()
{
	int num[N],score[N];
	int i,count;
	printf("please enter num and score until score<0:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d%d",&num[i],&score[i]);
		if(score[i]<0)
		{
			count=i;
			break;
		}
	}
	printf("Total student:%d\n",count);
	int failcount;
	printf("Fail:\n"); 
	printf("number\t score\n");
	for(i=0;i<N;i++)
	{
		if(score[i]<0)
    	{
    		break;
		}
		if(score[i]<60)
		{
			printf("%d\t %d\n",num[i],score[i]);
			failcount++;
		} 
	}
	printf("fail student = %d\n",failcount);
	float sum,average;
	for(i=0;i<N;i++)
	{
		if(score[i]<0)
		{
			break;
		}
		sum+=score[i];
		average=sum/count;
	}
	printf("aver:%.2f\n",average);
	int abovecount=0;
	printf("Above aver:\n");
	printf("number\t score\n");
	for(i=0;i<N;i++)
	{
		if(score[i]<0)
    	{
    		break;
		}
		if(score[i]>=average)
		{
			printf("%d\t %d\n",num[i],score[i]);
			abovecount++;
		} 
	}
	printf("Above aver students = %d\n",abovecount);
	int stu[6];
	float a,b,c,d,e,f;
	stu[0]=0;
	stu[1]=0;
	stu[2]=0;
	stu[3]=0;
	stu[4]=0;
	stu[5]=0; 
	printf("score\t number\t percent\n");
	for(i=0;i<N;i++)
	{
		if(score[i]<0)
    	{
    		break;
		}
		if(score[i]<60) stu[0]++;
		if(score[i]>=60 && score[i]<=69) stu[1]++;
		if(score[i]>=70 && score[i]<=79) stu[2]++;
		if(score[i]>=80 && score[i]<=89) stu[3]++;
		if(score[i]>=90 && score[i]<=99) stu[4]++;
		if(score[i]==100) stu[5]++;
	}
	a=stu[0]*1.0/count;
	b=stu[1]*1.0/count;
	c=stu[2]*1.0/count;
	d=stu[3]*1.0/count;
	e=stu[4]*1.0/count;
	f=stu[5]*1.0/count;
	printf("<60  \t %d\t %.2f\n",stu[0],a);
	printf("60-69\t %d\t %.2f\n",stu[1],b);
	printf("70-79\t %d\t %.2f\n",stu[2],c);
	printf("80-89\t %d\t %.2f\n",stu[3],d);
	printf("90-99\t %d\t %.2f\n",stu[4],e);
	printf(" 100 \t %d\t %.2f\n",stu[5],f);
}
