#include<stdio.h>
int main()
{
	float faHeight = 0,moHeight = 0,adultHeight = 0;
	char sex = 0,sports = 0,diet = 0;
	printf("�����븸�����(CM)��");
	scanf("%f",&faHeight);
	printf("������ĸ�����(CM)��");
	scanf("%f",&moHeight);
	printf("�����뺢���Ա�(�к�ΪM,Ů��ΪY)��");
	getchar();
	scanf("%c",&sex);
	printf("С���Ƿ�ϲ����������(Y/N):");
	getchar();
	scanf("%c",&sports);
	printf("С���Ƿ������õ���ʳϰ��(Y/N)��");
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
		printf("Ԥ�������ǣ�%f",adultHeight);		
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
		printf("Ԥ�������ǣ�%f",adultHeight);		
	}
   return 0;
}

