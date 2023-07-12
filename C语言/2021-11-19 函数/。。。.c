#include<stdio.h>
#include<math.h>
int cons(int i)        //cons function is used to judgement of prime number
{
	int n = 0, _prime_ = 1;
	for(n = 2; n <= sqrt(i); n++)
	{
		if(i%n == 0)
		{
			_prime_ = 0;
		}
	}
	return _prime_;
} 
void prime(int num) 
{
	int a = 0, b = 0;
	int n = 0, p1 = 1, p2 = 1;
	for(a = 2; a <= num; a++)
	{
		p1 = 1;
		p1 = cons(a);
		if(p1 == 1)
		{
			b = num - a;
	  		if(b > 0 && b <= a)
	  		{
	  			p2 = 1;
	  			p2 = cons(b);
				if(p2 == 1)
				{
					printf("%d = %d + %d\n",num,a,b);
				}	
			}
		}
	}

}
int main()
{
	int num = 0;
	printf("Input a number above 4:\n");
	scanf("%d",&num);
	prime(num);
	return 0;
}
 

