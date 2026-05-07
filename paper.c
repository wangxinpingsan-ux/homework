#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int guessnumber (void);
int main (void){

   int win =0 , lose = 0,draw =0 ,count=0;


    while(1){
    int shoot =0;
    puts ("scissors=0,stone=1,paper=2, 3 to end");
    printf("Shoot");
    scanf("%d" ,&shoot);
    int guess_number=guessnumber ();

    if (shoot==3){
    printf("win %d \nlose %d\ndraw %d \n",win,lose,draw);
    printf("play count : %d",count);
        break;
    }
    count++;

    if(shoot==guess_number)
    {
        puts ("draw");
        printf("computer shoot %d\n",guess_number);
        draw++;
        continue;
    }
    switch (shoot)
    {
    case 0://scissors
    if(guess_number==1 ){
        puts ("win");
        printf("computer shoot %d\n",guess_number);
        win++;
        break;

    }
    else{
        puts ("lose");
        printf("computer shoot %d\n",guess_number);
        lose++;
        break;
    }

    case 1://stone
    if(guess_number==0 ){
        puts ("win");
        printf("computer shoot %d\n",guess_number);
        win++;
        break;
    }
    else{
        puts ("lose");
        printf("computer shoot %d\n",guess_number);
        lose++;
        break;
    }

    case 2://paper
    if(guess_number==1 ){
        puts ("win");
        printf("computer shoot %d\n",guess_number);
        win++;
        break;
    }
    else{
        puts ("lose");
        printf("computer shoot %d\n",guess_number);
        lose++;
        break;
    }
        
        
    
    default:
        break;
    }


    }

    
}





int guessnumber (void){
    int random =0;
    srand(time(NULL));
    random =(rand()%3);

    return random;

}