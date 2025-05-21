#include"stdio.h"

int x;

void main(){
    Start:
    printf("enter x");
    scanf("%i",&x);
    if(x==1){
        hi:
        printf("hi\n");
        // goto hello;
        
    }
    else if(x==2){
        hello:
        printf("hello go to hi\n");
        goto hi;
    }
    else{
        goto Start;
    }
}