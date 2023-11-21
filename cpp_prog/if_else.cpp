/* 
*this code is for subtraction using if and else 
*if statement only carry condition not on else
*/ 

#include<iostream>
using namespace  std;
main(){
    int x,y;
    cout<<"enter x & y"<<endl;
    cin>>x>>y;
    system("cls");    // this code was written in vs thus this command may not work in other platform.
    if(x>y){
        cout<<"if loop x-y= "<<x-y<<endl;
    }
    else{
        cout<<"else loop y-x= "<<y-x<<endl;
    }
}


/* library
main()
if (condition){

}
condition== True --- loop run 
condition == False 
else{
    loop run
}
*/