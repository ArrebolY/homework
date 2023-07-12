#include <stdio.h>

main()
{
  char a,b; 
  int c;
   
  scanf("%c%*c%c%*c%d",&a,&b,&c);
  printf("\'%c\',\'%c\',%d\n",a,b,c); 
}

