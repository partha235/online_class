#include"stdio.h"

int x;

void main(){
    printf("enter x");
    scanf("%i",&x);
    for(int j=0;j<=x;j++){
        if(j==25) {continue;}
        printf("j is %i\n ",j);  
    }
}