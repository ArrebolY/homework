//����1-1/2+1/3-1/4...+1/99-1/100+...ֱ�����һ��ľ���ֵС��10^-4Ϊֹ
#include<stdio.h>
#include<math.h>
int main()
{
	float i,j,m,sum=0;
	for(i=1;i<=10000;i++)
	{
		j=pow(-1,i+1);	
		m=j*(1/i);
		sum+=m;
	}
	printf("%f",sum);
	return 0;
}
