#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  float x=0 ,a = 2.0,b = 3.0 , c =1.0 , y=0.0;
  
  
  x=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  y=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);



  printf("x=%.2f\n",x);
  printf("x=%.2f",y);









    return EXIT_SUCCESS;
}