  #include<stdio.h>

  int main ()
  {
    float total =0.0;
    float grade =0.0;
    int counter =1;
    while(counter<=5)
    {
        printf ("next grade");
        scanf("%f", & grade);
        total= total+grade;
        counter++;
    }
    total= total/5.0;
    printf("even grade: %.2f", total);
    return 0;
  }