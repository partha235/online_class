#include"iostream"
using namespace std;
main(){
    int x,*y;
    char z,*w;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter y"<<endl;
    cin>>z;
    y=&x;
    w=&z;
    cout<<"y is  "<<y<<"  w is  "<<w<<endl;

}