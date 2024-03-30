#include"iostream"
using namespace std;
int main(){
    int x,*y;   //pointer => address of the variable.
    string z,*w;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter z"<<endl;
    cin>>z;
    y=&x;
    w=&z;
    cout<<"y is  "<<y<<"\n  w is  "<<w<<endl;

}