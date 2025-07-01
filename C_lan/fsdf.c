#include"stdio.h"
#include"string.h"

void main(){
    // array => [1,5,8,"s","e"] 
    char x[]="bps",pass[4];
    printf("enter password");
    scanf("%s",pass);
    printf("%i\n",strcmp(x,pass));
    // strcmp => string compare
    if(strcmp(x,pass) ==0 ){
        printf("mobile open\n");
    }
    else{
        printf("try again\n");
    }
}