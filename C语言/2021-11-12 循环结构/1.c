//��λ��Ϊ6���ܱ�3��������λ�����ж���
#include<stdio.h>
int main()
{
	int i,t=0;
	for(i=10000;i<=99999;i++)
	  if(i%3==0 && i%10==6)
		t++;
		printf("%d",t);
	  
} 
