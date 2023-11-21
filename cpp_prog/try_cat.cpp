#include <iostream>
using namespace std;

int main() {
  try {
    int x = 10;
    int y = 0;

    int result = x / y; // This will throw an exception because y is 0

    cout << result << endl;
  } catch (exception& e) {
    // Code that handles the exception
    cout << "An exception occurred: " << e.what() << endl;
  }
}
