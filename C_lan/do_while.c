#include"stdio.h"

int x=150;

int main(){
    do{
        printf("do loop %i \n",x); 
        x++;  // decrement  
        
    } while(x<200);
     printf("while loop %i",x);
}   