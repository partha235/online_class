/* this code is for switch statement where the program switches 
with given input we have to add "break" operation at every end of case
and default. */

#include<iostream>
using namespace std;
int main(){
    char x;
    float d=5,j=8;
    cout<<"ent char";
    cin>>x;
    system("clear"); 
    switch (x){
        case '+':
        cout<<"d+j "<<d+j<<endl;  
        break;
        case '-':
        cout<<"d-j "<<d-j<<endl;
        break;
        case '/':
        cout<<"d/j "<<d/j<<endl;
        break;
        default:
        cout<<"not found ";
        break;
    }   
}