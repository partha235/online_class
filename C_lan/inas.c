#include "stdio.h"
#include "stdlib.h"

int x,y,c;

int main(){
    printf("enter x value");   // output function
    scanf("%i",&x);            // input
    printf("enter y value");
    scanf("%i",&y);
    // system("clear");  // terminal clear
    system("cls");
    c=x+y;
    printf("c= %i\n",c);
}
/*
%i ==> integer
%f ==> float
%c ==> character
%s ==> string 
*/