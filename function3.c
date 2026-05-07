#include <stdio.h>
#include <stdbool.h>


int function (int a );
int main (void){
   bool done = true;

   while(done == true){

   int chose =3;
   int x =0,answer=0;
   printf("1 to number , 0 to end:");
   scanf("%d",&chose);
   
   switch(chose)
   {

   case 1:
   
        printf("enter number :");
        scanf("%d", &x);
        answer = function(x);
        printf("%d!: %d\n", x, answer);
        break; // ⬅️ 這裡一定要加 break
   



    case 0 :
    
    done = false;
    break;
    
   }




   

   }






    return 0;
}
int function (int a ){
     int answer =1;


     while(a>0){
        answer=answer*a;
        a--;
     }
     
   return answer;
}