#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("请输入三角形三条边：");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){	
		if(a==b||a==c||b==c){
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){		
		        printf("构成等腰直角三角形");
		    }
			else{
			    printf("构成等腰三角形");
			} 
		}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			printf("构成直角三角形");
		} 
	    else{
	        printf("构成一般三角形");
	    }
	}
	else{	
	    printf("不能构成三角形");
    }  
	return 0; 
}
