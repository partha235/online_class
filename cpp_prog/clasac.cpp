#include <iostream>

using namespace std;

class MyClass {
public:
  float x;

private:
  int y;

protected:
  float pi=3.14,c=9000000;
};

class MyDerivedClass : public MyClass {
public:
  void printZ() {
    float c_a=2*pi*x;
    cout << "area of circle = "<<c_a<< endl;
  }
};

int main() {
  // MyClass myObject;

  // Cannot access the private member y
  // myObject.y = 20;

  MyDerivedClass myDerivedObject;
  cout<<"enter radius";
  cin>>myDerivedObject.x;
  myDerivedObject.printZ();
}
