#include"iostream"
using namespace std;
int x;
main()
{
    cout<<"enter x";
    cin>>x;
    for(x;x<=100;x++){
       
        cout<<"first loop %i \n"<<x;
         for(x;x==20;x=x+10){
            cout<<"second loop  %i \n"<<x;
        }
    }


}