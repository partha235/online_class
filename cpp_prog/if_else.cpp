/* 
*this code is for subtraction using if and else 
*if statement only carry condition not on else
*/ 

#include<iostream>
using namespace  std;
main(){
    int x,y,z;
    cout<<"enter x & y";
    cin>>x>>y;
    system("cls");// this code was writen in vs thus this command may not work in other platform.
    if(x>y){
        cout<<"x-y= "<<x-y<<endl;
    }
    else{
        cout<<"y-x= "<<y-x<<endl;
    }
}