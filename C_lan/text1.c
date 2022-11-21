#include"stdio.h"
#include"string.h"

void main(){
    char x[]="saga",y[5];
    printf("enter name");
    scanf("%s",&y);
    int r=strcmp(x,y);
    if (r==0){
        printf("open");
    }
}