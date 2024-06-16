#include <iostream>
using namespace std;

void callByReference(int &x)
{
    x = 100; // This change will affect the original argument
}

int main()
{
    int a = 42;
    cout << "Before call: " << a << endl;
    callByReference(a);
    cout << "After call: " << a << endl;
    return 0;
}
