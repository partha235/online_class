#include"stdio.h"

char x;

int main(){
    printf("enter x");
    scanf("%s",&x);
    switch (x) 
    {
    case 'a':
        printf("a is entered");
        break;
    case 'b':
        printf("b is entered");
        break;
    case 'c':
        printf("c is entered");
        break;
    case '1':
        printf("1 is entered");
        break;
    
    default:
    printf("nothing");
        break;
    }
}


/* 

switch ()
{
case '':
    action;
    break;

}

*/