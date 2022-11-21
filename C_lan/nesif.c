#include"stdio.h"
int x,g;

void main(){
    printf("enter x and g ");
    scanf("%i%i",&x,&g);
    if(x<=g){
        if(x>=10){
            printf("x > 10");
        }
        printf("x<g");
    }
}