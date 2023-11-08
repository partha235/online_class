#include <iostream>
using namespace std;

int main(){
    int* x = new int; 
    *x = 10;
    cout<<" x= "<<x<<endl;
    delete x; // Release the memory that is allocated to the variable x
    cout<<" af x= "<<x<<endl;
}