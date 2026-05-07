  #include<stdio.h>
  #include<stdbool.h>

  float bmi (float h , float w);
  int main (void)
  {
    bool isdone = false ;
    
    
    while(isdone!=true)
    {
        int number =-1;
        puts("---------menu-------");
        puts("0 to end");
        puts("1 to bmi");
        scanf("%d",&number);
        switch(number)
        {
            case 0:
            isdone = true;
            break;

            case 1:
            {
                float height =0,weight =0;
                printf("enter height :");
                scanf("%f",& height);
                printf("enter weight : ");
                scanf("%f",& weight);

                printf("bmi = %.3f\n",bmi(height,weight));
    
            }

            default:
            continue;
        }

    
    }

    return 0;
  }
  float bmi (float h , float w)
  {
    float bmi =0.0;
    bmi=w/((h/100.0)*(h/100.0) );
    return bmi ;
  }