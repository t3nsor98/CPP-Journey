#include <iostream>
using namespace std;

class A{
    public:
    //constructor
    A(){
        cout<<"constructor called"<<endl;
    }
    //destructor
    ~A(){
        cout<<"destructor called"<<endl;
    }
};

int main() {
    A obj1;

    int x = 1;
    if (x) {
        A obj2;
    }

    return 0;

}