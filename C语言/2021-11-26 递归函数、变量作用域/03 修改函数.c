#include <stdio.h>
int main()
{
   	int x, y;  
   	printf("Enter two integers: ");
   	scanf("%d%d",&x,&y);
   	printf("The result is %d\n",mystery( x, y ));
   	return 0; 
} 
int mystery( int a, int b )
{
	if ( b < 0 )
	{
		a *= -1;
		b *= -1;
	}
   	if ( b == 1 ) 
      	return a;
   	else 
      	return a + mystery( a, b - 1 );
} 

