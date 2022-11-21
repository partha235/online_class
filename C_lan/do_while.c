#include"stdio.h"
int x=500;
void main(){
    do{
        x--;
        printf("do loop %i\n",x);
}
    while(x>100);
        printf("while loop %i",x);    
}