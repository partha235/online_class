#include <iostream>
using namespace std;

main() {
  auto x = 10; 
  auto y = "Hello, world!"; 

  cout << "type of x is : "<<typeid(x).name()<< endl;
  cout << "type of y is : "<<typeid(y).name()<< endl;
  /*
  The mangled name is a unique identifier for the type, and it is used by the compiler to generate code. 
    | Human-readable name | Mangled name |
    |---|---|---|
    | int | i |
    | string | PKc |
    | double | d |
    | char | c |
    | void | v |
    */
}
