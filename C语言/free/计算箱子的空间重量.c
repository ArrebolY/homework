//Computes the dimensional weight of a 12" * 10" * 8" box 

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;
  
  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;
  
  printf("Dimensions: %d*%d*%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", weight);
  printf("Dimensional weight (pounds): %d\n", weight);
  
  return 0;
}
