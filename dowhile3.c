  #include<stdio.h>

  int main ()
  {
    int  counter=0,error=0;
    float grade =0 ,total=0;
    do
    {

    printf("enter grade(-1 to end) : ");
    scanf("%f", &grade);
    if (grade==-1)
      {
        
        break;
      }
    if(grade >= 0 && grade <= 100)
    {
        total= total+grade;
        counter++;
    }
    else
    {
        error=1;
        break;
    }
   
    
    }
    while(1);
    if(counter==0)
    {
        printf("error");
        return 0;
    }
    
    if(error ==1)
    {
        printf("error");
        return 0;
    }
    
    printf("total=%f\n",total);
    printf("counter=%d\n",counter);
    printf("average grade=%.2f",total/counter);
    return 0;
  }