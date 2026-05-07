  #include<stdio.h>

  int main ()
  {
   int counter = 0;
   float grade =0, total=0,averagegrade =0;
   while(1)
   {
    
    printf("enter grade (-1 to end ) : ");
    scanf("%f", & grade);
    
    if (grade==-1)
    {
        break;
    }
    total = total+grade;
    counter++;
   }
   if (counter > 0)
   {
    averagegrade=total/counter;
    printf ("average grade is %f", averagegrade);
   }
   else
   {
    printf ("no grade were entered");
   }

    return 0;
  }