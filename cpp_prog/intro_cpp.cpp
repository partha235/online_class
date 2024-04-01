#include <iostream>

using namespace std;

class shape {
public:
  void area_square(float a) {
  
    cout << "area of square =  "<<4*a << endl;
  }

  void area_rect(float l , float b) {
    cout << "area of rectangle = "<<l*b << endl;
  }
};

class perimeter : public shape {
public:
  void peri_square(float a) {
    cout << "perimeter of square = "<<a*a << endl;
  }
};

int main() {
  perimeter value;

  value.peri_square(5);
  value.area_rect(8,7);

  return 0;
}
