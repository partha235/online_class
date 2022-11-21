#include"stdio.h"
int x=0;
int main(){
    for(x;x<=50;x++){
        int d=x%2;
        for(x;d==0;d++){
            printf("%i\n",x);
        }
    }
}