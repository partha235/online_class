#include"stdio.h"
int x,y,c;
int main(){
    printf("enter x value");
    scanf("%i",&x);
    printf("enter y value");
    scanf("%i",&y);
    system("clear");
    c=x+y;
    printf("c= %i\n",c);
}
/*
%i ==> integer
%f ==> float
%c ==> character
%s ==> string 
*/