#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("�����������������ߣ�");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){	
		if(a==b||a==c||b==c){
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){		
		        printf("���ɵ���ֱ��������");
		    }
			else{
			    printf("���ɵ���������");
			} 
		}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			printf("����ֱ��������");
		} 
	    else{
	        printf("����һ��������");
	    }
	}
	else{	
	    printf("���ܹ���������");
    }  
	return 0; 
}
