#include<stdio.h>
int main()
{
	int x,y,z,a;
	printf("please input three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y){
		a=x;
		x=y;
		y=a;
	}
	if(x>z){
		a=x;
		x=z;
		z=a;
	}
	if(y>z){
		a=y;
		y=z;
		z=a; 
	}
    printf("small to big: %d %d %d\n",x,y,z);
	return 0;	
}
