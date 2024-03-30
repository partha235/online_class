#include <iostream>
using namespace std;

class MyClass {
public:
  int x,a;

  void printX() {
    cout << x << endl;
  }
  void area(){
    cout<<"area of square =  "<<4*a<<endl;
  }
};

int main() {
  MyClass myObject;
  myObject.x = 10;
  myObject.printX();
  myObject.a=5;
  myObject.area();

  return 0;
}
