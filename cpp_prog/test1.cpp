#include<iostream>
using namespace std;
class Myclass{
  protected:
  int x;
  void printx(){
    cout<<x<<endl;
  }
};
class MyDerved :public Myclass{
  public:
  void printx(){
    x=20;
    cout<<x<<endl;
  }
};
int main(){
  MyDerved MyDerivedobject;
  MyDerivedobject.printx();
  return 0;
}