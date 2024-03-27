#include<iostream>
using namespace std;
int main(){
  int mark_per;
  cout<<"enter your percentage";
  cin>>mark_per;
  if(mark_per>=98){
    cout<<"you got o grade";
  }
  else if(mark_per>=90){
    cout<<"you got a+ grade";
  
  }
  else if(mark_per>=80){
    cout<<"you got a grade";
  }
  else if(mark_per>=70){
    cout<<"you got b+ grade";
  }
  else if(mark_per>=60){
    cout<<"you got b grade";
  } 
  else if(mark_per>=50){
    cout<<"you got c grade";
  }
  else{
    cout<<"you got no grade or ra";
  }
}