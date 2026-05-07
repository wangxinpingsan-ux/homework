  #include<stdio.h>

  int main ()
  {
    float f =0.0 ,c =0.0;
    printf("enter 攝氏溫度 ");
    scanf("%f", &c);
    f=(9.0/5*c)+32;
    printf("華氏溫度:%.2f",f);
    

    return 0;
  }