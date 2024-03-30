#include <iostream>
using namespace std;

class MyClass {
protected:
  int x;

  void printX() {
    cout << x << endl;
  }
};

class MyDerivedClass : public MyClass {
public:
  void printX() {
    x=20;
    // Can access the protected member x
    cout << x << endl;
  }
};

int main() {
  MyDerivedClass myDerivedObject;
  myDerivedObject.printX();

  return 0;
}
