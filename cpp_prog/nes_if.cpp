#include"iostream"
using namespace std;
int age;
main(){
    cout<<"enter x";
    cin>>age;
    if(age>=18){
        if(age>=60){
            cout<<"senior citizen\n";
        }
        cout<<"you can vote";
    }
    else{
        cout<<"you can't vote";
    }

}