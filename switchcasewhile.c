  #include<stdio.h>
  #include<stdbool.h>


  int main ()
  {
    bool isdone = false ;
    bool done = false ;
    
    while(isdone!=true)
    {
        int number =-1;
        puts("---------menu-------");
        puts("0 to end");
        puts("1 to grade");
        scanf("%d",&number);
        switch(number)
        {
            case 0:
            isdone = true;
            break;

            case 1:
            {
             char grade = 0;
             int a = 0, b = 0, c = 0;
             printf ("enter grade (x to end)\n");

            while(done!=true)
            {
             scanf("%c", &grade);
             if(grade=='X'||grade=='x')
            {
              done = true;
              while(getchar()!='\n')
              {

              }
              break;
            }
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
            break;
    
            }

            default:
            continue;
        }

    
    }

    return 0;
  }