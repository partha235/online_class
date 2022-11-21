#include"stdio.h"
#include"string.h"
void main(){
    char x[]="saga@23",pass[8];
    printf("enter");
    scanf("%s",pass);
    printf("%s\n",strcmp(x,pass));
    if(strcmp(x,pass)){
        printf("mobile open\n");
    }
    else{
        printf("try again\n");
    }
}