#include <iostream>
using namespace std;
class A
{
public:
    // Constructor
    A()
    {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~A()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    A obj1; // Constructor Called for obj1

    int x = 1;
    if (x)
    {
        A obj2; // Constructor Called for obj2
    } // Destructor Called for obj2 as it goes out of scope

    // Destructor called for obj1 as it goes out of scope
    return 0;
}
