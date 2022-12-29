#include"iostream"
using namespace std;

void circle(int r){
    cout<<"area of circle "<<3.14*r*r<<endl;
}

void square(int a){
    cout<<"area of square  "<<4*a<<endl;
}

void cone(int b, int h){
    cout<<"area of cone "<<(1*b*h)/2<<endl; //1*b*h/2
}

main(){
    system("cls");
    cone(2,12);
    circle(5);
    square(16);
}