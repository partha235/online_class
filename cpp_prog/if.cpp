#include<iostream>
using namespace std;
main(){
    string pas,pas_s;
    cout<<"enter password";
    cin>>pas_s;
    system("cls");
    //now the password is saved in mobile storage
    cout<<"enter password for open mobile";
    cin>>pas;
    system("cls");
    if (pas==pas_s){
        cout<<"mobile open"<<endl;
    }
    
}