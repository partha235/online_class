#include"stdio.h"
int x,y;
int main(){
    printf("enter x and y value");
    scanf("%i%i",&x,&y);
    if(x>=y){
        printf("c= %i",x+y);
    }
    else{                          // no condition
        printf("g= %i\n",x-y);
    }
}