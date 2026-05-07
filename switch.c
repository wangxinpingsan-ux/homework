  #include<stdio.h>

  int main ()
  {
    char grade;
    int a = 0, b = 0, c = 0;
    printf ("enter grade (eof to end)\n");

    while(scanf("%c", &grade)!=EOF)
    {
        switch(grade)
        {
            case'A':
            case'a':
            a++;
            break;
            case'B':
            case'b':
            b++;
            break;
            case'C':
            case'c':
            c++;
            break;

            case '\n': 
            case ' ':          
            break;
             
            default:
            printf("error\n");
            break;
            
        }
    }
    printf("A:%d\n",a);
    printf("B:%d\n",b);
    printf("C:%d\n",c);
    

    return 0;
  }