// nested statement.
#include"iostream"
using namespace std;
int x;
int main()
{
    cout<<"enter x";
    cin>>x;
    for(x;x<=100;x++){
       
        cout<<"first loop "<<x<<endl;
         for(x;x<=80;x=x+2){        // increment by 10
            cout<<"second loop "<<x<<endl;
        }
    }
}