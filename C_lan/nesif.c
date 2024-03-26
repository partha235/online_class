#include"stdio.h"
int x,g;

int main(){
    printf("enter x and g ");
    scanf("%i%i",&x,&g);
    if(x<=g){
        if(x>=10){
            printf("x > 10\n");
        }
        printf("x<g");
    }
}