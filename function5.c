#include <stdio.h>
#include <stdbool.h>

bool done = true;
bool prime (int n );
int main (void){
    int number =0,answer = 0;
    printf("enter number : ");
    scanf("%d",&number);
    
    while(number>2){

        answer = prime(number);
        while (done == false){
        printf("%d\n",answer );
        done = true;
        }
        number--;
    }




    return 0 ;
}
bool prime (int n ){
   int x =2,y=0;
   while (x<n){
    y=n%x;
    while(y==0){
        done = false;
        return n;
    }

   }
    

}