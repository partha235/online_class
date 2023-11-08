#include <iostream>
using namespace std;

class MyClass {
public:
  int x;

  void printX() {
    cout << x << endl;
  }
};

int main() {
  MyClass myObject;
  myObject.x = 10;
  myObject.printX();

  return 0;
}
