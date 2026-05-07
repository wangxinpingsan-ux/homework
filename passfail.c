  #include<stdio.h>

  int main ()
  {
    int pass=0,fail=0,counter=1,result=0;
    while(counter<=5 )
    {
        printf ("enter result (1=pass,2=fail)");
        scanf("%d", &result);
        if (result==1)
        {
            pass++;
        }
        if (result==2)
        {
            fail++;
        }
        if(result!=1 && result!=2)
        {
        break;
        }
        counter++;
    }
    printf("pass = %d\nfail = %d\n",pass,fail);

     if (pass>=3)
    {
        printf("good");
    }
    else 
    {
        printf("bad");
    }

    return 0;
  }