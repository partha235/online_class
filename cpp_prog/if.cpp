#include<iostream>
using namespace std;
int main(){
    string pas,pas_s;
    cout<<"enter password";
    cin>>pas_s;
    system("clear");
    //now the password is saved in mobile storage
    cout<<"enter password for open mobile";
    cin>>pas;
    system("clear");
    if (pas==pas_s){
        cout<<"mobile open"<<endl;
    }
    
}


/* library
main()
if (condition){

}
condition== True --- loop run 
*/