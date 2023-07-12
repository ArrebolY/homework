#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
	int i,j,a,b,c,result,n,score,num;
	srand(time(NULL));	
	for(i=1;i<=10;i++)
	{
		j=rand()%4;
		a=rand()%10;
		b=rand()%10;
		printf("%d",a);
		switch(j)
		{
		case 0:
			printf("+");
			result=a+b;
			break;
		case 1:
			printf("-");
			result=a-b;
			break;
		case 2:
			printf("*");
			result=a*b;
			break;
		case 3:
			printf("/");
			result=a/b;
			break;
		}
		printf("%d=",b);
		scanf("%d",&c);
		if(c==result)
		{
			printf("Right!\n");
			score+=10;
		}
		else
		{
			printf("Not correct!\n");
			num+=1;
		}		
	}
	
	printf("score:%d wrong answer:%d",score,num);
	return 0;
}
