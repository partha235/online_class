#include"iostream"
using namespace std;

class Elements{
    public:
    string name;
    int a_no;
    int mass;
};
main(){
    Elements elem1;
    elem1.name="hydrogen";
    elem1.a_no=1;
    elem1.mass=2;
    cout<<elem1.name;
    Elements elem2;
    elem2.name="carbon";
    elem2.a_no=6;
    elem2.mass=100;
    cout<<elem2.name;
}