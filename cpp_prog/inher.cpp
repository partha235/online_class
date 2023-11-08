#include <iostream>

using namespace std;

class bps {
public:
  void elec() {
    cout << "I'm electronic hobbits " << endl;
  }

  void emb() {
    cout << "I'm embedded system programmer" << endl;
  }
};

class bps_explore : public bps {
public:
  void bark() {
    cout << "I'm Physicist " << endl;
  }
};

int main() {
  bps_explore partha;

  partha.bark();
  partha.elec();
  partha.emb();

  return 0;
}
