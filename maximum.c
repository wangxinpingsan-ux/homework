#include<stdio.h>

int maximum(int a ,int b, int c);

int main(void)
{

  int num1 = 0,num2 = 0,num3 = 0;
  
  printf("enter three number : \n");
  scanf("%d%d%d", & num1, &num2, &num3);

  printf("maximum is %d\n",maximum(num1 ,num2, num3));

return 0;

}

int maximum(int a ,int b, int c)
{
    int max = a;

    if (b>max)
    {
        max = b;
    }
    if (c>max)
    {
        max = c;
    }

    return max ;
}