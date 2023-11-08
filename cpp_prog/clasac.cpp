#include <iostream>

using namespace std;

class MyClass {
public:
  int x;

private:
  int y;

protected:
  int z;
};

class MyDerivedClass : public MyClass {
public:
  void printZ() {
    cout << z << endl;
  }
};

int main() {
  MyClass myObject;
  myObject.x = 10;

  // Cannot access the private member y
  // myObject.y = 20;

  MyDerivedClass myDerivedObject;
  myDerivedObject.printZ();
}
