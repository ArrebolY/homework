#include<stdio.h>
int main()
{
    int i, j, x, flag=0;  
    for( i=23; flag==0; i+=2 )
    {
        for( j=1,x=i; j<=4&&x>=11; j++ )
            if( (x+1) % (j+1) == 0)  
                x -= (x+1) / (j+1);
            else
            {
                x=0;
                break;
            }
        if(j==5 && x==11)
        {
            printf("原来鱼缸中有%d条金鱼", i);
            flag = 1;  
        }
    }  
    return 0;
}
