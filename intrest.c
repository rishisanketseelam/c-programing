#include <stdio.h>

void main()  
{
  int years,period ;
  float amount, intrest,value;
  printf(" enter the values for:mount ,intrest and period: \n\n");
  scanf("%f %f %d",&amount,&intrest,&period);
  printf("\n");
  years= 1;
  while(years<=period)
  {
      value= amount+ intrest*period;
      printf("%d years and %10.3f value\n",period, value);
      years=years+1;
  }
}
