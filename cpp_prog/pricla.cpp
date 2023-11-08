#include <iostream>
using namespace std;

class MyClass {
private:
  int x;

  void printX() {
    cout << x << endl;
  }
};

int main() {
  MyClass myObject;

  // Cannot access the private member x
  // myObject.x = 10;

  // Cannot call the private method printX
  // myObject.printX();

  return 0;
}
