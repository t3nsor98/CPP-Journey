#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = 100; // This change won't affect the original argument
    cout<<x<<endl;
}

int main()
{
    int a = 42;
    cout << "Before call: " << a << endl;
    callByValue(a);
    cout << "After call: " << a << endl;
    return 0;
}
