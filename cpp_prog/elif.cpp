/* this code is for else if where multiple if can be used
* this code states the grading system of colleges 
on basis of mark.
*/
#include<iostream>
using namespace std;
main(){
    int mark_per;
    cout<<"enter your percentage";
    cin>>mark_per;
    if(mark_per>=98){
        cout<<"you got O grade";
    }
    else if(mark_per>=90){
        cout<<"you got A+ grade";
    }
     else if(mark_per>=80){
        cout<<"you got A grade";
    }
    else if(mark_per>=70){
        cout<<"you got B+ grade";
    }
    else if(mark_per>=60){
        cout<<"you got B grade";
    }
    else if(mark_per>=50){
        cout<<"you got C+ grade";
    }
    else if(mark_per>=40){
        cout<<"you got C grade";
    }
    else {
        cout<<"you got no grade or RA";
    }


}