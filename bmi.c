  #include<stdio.h>

  int main ()
  {
    float height =0,weight =0;
    printf("enter height ");
    scanf("%f",& height);
    printf("enter weight ");
    scanf("%f",& weight);
    printf("bmi = %.3f",weight/((height/100.0)*(height/100.0) ));

    

    return 0;
  }