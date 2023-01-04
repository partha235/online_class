#include"iostream"
using namespace std;

void area_circle(int r){
    cout<<"area of the circle =  "<<3.14*r*r<<endl;
} 

void area_cone(int b, int h){
    cout<<"area of cone = "<<(1*b*h)/2<<endl;
}
main(){
    area_circle(6);
    area_cone(14,25);
}