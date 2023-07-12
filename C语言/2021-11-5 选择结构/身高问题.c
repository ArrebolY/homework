#include<stdio.h>
int main()
{
	float faHeight = 0,moHeight = 0,adultHeight = 0;
	char sex = 0,sports = 0,diet = 0;
	printf("请输入父亲身高(CM)：");
	scanf("%f",&faHeight);
	printf("请输入母亲身高(CM)：");
	scanf("%f",&moHeight);
	printf("请输入孩子性别(男孩为M,女孩为Y)：");
	getchar();
	scanf("%c",&sex);
	printf("小孩是否喜欢体育锻炼(Y/N):");
	getchar();
	scanf("%c",&sports);
	printf("小孩是否有良好的饮食习惯(Y/N)：");
	getchar();
	scanf("%c",&diet);
	if(sex == 'M')
	{
		if(sports == 'Y' && diet =='Y'){
		    adultHeight = ((faHeight + moHeight)*0.54)*(1+0.035);
		}
	    else if(sports == 'Y' && diet =='N'){
		    adultHeight = ((faHeight + moHeight)*0.54)*(1+0.02);
		}   
		else if(sports == 'N' && diet =='Y'){
		    adultHeight = ((faHeight + moHeight)*0.54)*(1+0.015);
		}
		else
		{
			adultHeight = (faHeight + moHeight)*0.54;
		}   
		printf("预测的身高是：%f",adultHeight);		
	}
	else 
	{
		if(sports == 'Y' && diet =='Y'){
			adultHeight = ((faHeight*0.923 + moHeight)/2)*(1+0.035);
		}
		else if(sports == 'Y' && diet =='N'){
			adultHeight = ((faHeight*0.923 + moHeight)/2)*(1+0.02);
		}
		else if(sports == 'N' && diet =='Y'){
			adultHeight = ((faHeight*0.923 + moHeight)/2)*(1+0.015);
		}
		else
		{
			adultHeight = (faHeight*0.923 + moHeight)/2;
		}
		printf("预测的身高是：%f",adultHeight);		
	}
   return 0;
}

