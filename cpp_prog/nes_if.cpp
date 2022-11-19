/* this program is an example of nested if statement.
This program runs with age of the person as int and process it for that he can vote or not and also he/she belongs to 
senior citizenship or not.*/
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