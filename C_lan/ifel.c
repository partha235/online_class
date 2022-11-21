#include"stdio.h"
int x,y,g;
void main(){
    printf("enter x and y value");
    scanf("%i%i",&x,&y);
    if(x>=y){
        printf("c= %i",x+y);
    }
    else{
        printf("g= %i\n",x-y);
    }
}