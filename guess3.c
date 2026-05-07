#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int guessnumber (int max_1);
int main (void){
    
    
    
    while(1){
        int win = 0;
        int num = 0,counter = 0 ;
        int difficulty = 0;
        int max = 0;
        printf("elect difficulty\nenter1=1~10\nenter2=1~20\n");
        scanf ("%d", & difficulty);
        if (difficulty==1)
        max = 10;
        if (difficulty==2)
        max = 20;
        int guess_number=guessnumber (max) ;



        for(int i = 0; i< 3;i++ ){
        printf("guess number : ");
        scanf ("%d", & num);
    if(num >guess_number){

        printf("smaller\n");
        
        counter++;

    }else if(num <guess_number){
        printf("bigger\n");
        
        counter++;
        
    }else if(num==guess_number){
        win ++;
        printf ("you are right\n");
        printf("the number is : %d\n",guess_number);
        counter++;
        printf ("number of attempts: %d\n",counter);

        break;
    }

    }

    if(counter<=3 && win==1){
        printf("win\n");
        
    }else{
        printf("lose\n");
        printf("the answer is %d \n",guess_number);
        
    }
       
    int again=0;
    printf ("again? \n(0=NO) :");
    scanf ("%d",&again);
    if (again==0){
        break;
    }
     
   }

  return 0 ;


}
int guessnumber (int max_1){
    int random =0;
    srand(time(NULL));
    random =(rand()%max_1)+1;

    return random;

}