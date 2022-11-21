#include"stdio.h"
char x;
void main(){
    printf("enter x");
    scanf("%s",&x);
    switch (x)
    {
    case "a":
        printf("1 is entered");
        break;
    case "b":
        printf("2 is entered");
        break;
    case "c":
        printf("3 is entered");
        break;
    case "d":
        printf("4 is entered");
        break;
    
    default:
    printf("nothing");
        break;
    }
}