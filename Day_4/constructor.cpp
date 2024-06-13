#include <iostream>
#include <string>

using namespace std;

class abc
{
    int x, y; // Member variables are private by default

public:
    abc(int a, int b) : x(a), y(b) {} // Constructor with initializer list

    // Accessor functions
    int getX() const { return x; }
    int getY() const { return y; }
};

int main()
{
    abc myabc(10, 20);

    // Use accessor functions to get the values
    cout << myabc.getX() << endl;
    cout << myabc.getY() << endl;
    return 0;
}
