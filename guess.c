#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int guessnumber(void){
    int random =0;
    srand(time(NULL));
    random =(rand()%50)+1;

    return random;

}


int main (void){
    
    int num = 0,counter = 0 ,guess_number=guessnumber() ;
    
    while(1){
        printf("guess number : ");
        scanf ("%d", & num);
    if(num >guess_number){

        printf("smaller\n");
        
        counter++;

    }else if(num <guess_number){
        printf("bigger\n");
        
        counter++;
        
    }else if(num==guess_number){
        printf ("you are right\n");
        printf("the number is : %d\n",guess_number);
        counter++;
        printf ("number of attempts: %d\n",counter);

        break;
    }
   }

  return 0 ;


}
