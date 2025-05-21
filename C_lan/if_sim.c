#include "stdio.h"

int x,y;

int main(){
    printf("enter x and y value");
    scanf("%i%i",&x,&y);
    if(x<=y){     // if(condition){}
        printf("c= %i",x+y);
    }
}