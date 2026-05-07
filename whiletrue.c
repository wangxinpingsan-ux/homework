  #include<stdio.h>

  int main ()
  {
    float height =0,weight =0;



    while(1)
    {
    printf("enter height ");
    scanf("%f",& height);
    if (height<0)
    {
        break;
    }
    printf("enter weight ");
    scanf("%f",& weight);
      if (weight<0)
    {
        break;
    }
    printf("bmi = %.3f \n",weight/((height/100.0)*(height/100.0) ));
    }

    

    return 0;
  }