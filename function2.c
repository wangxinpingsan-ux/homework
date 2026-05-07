#include<stdio.h>



int square(int a ,int b);
int main (){
    int x =0, y=0,answer =0;
    printf("enter number: ");
    scanf("%d",&x);
    printf("次方: ");
    scanf("%d",&y);

    answer =square(x,y);
    printf("the number is : %d ",answer);


    



}
int square(int a ,int b){
    int number=1;
    while(b>0){
    number=number*a;
    b--;
    }
   return number;

}