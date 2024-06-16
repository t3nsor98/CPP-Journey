#include <iostream>
using namespace std;

class Demo
{
private:
    static int a; // Static data member declaration
public:
    static void fun()
    {                                        // Static member function
        cout << "Value of a: " << a << endl; // Accessing static data member
    }
};

// Static data member definition and initialization
int Demo::a = 500;

int main()
{
    Demo obj;
    obj.fun(); // Calling static member function using object

    // Alternatively, you can call the static member function using the class name
    Demo::fun();

    return 0;
}
