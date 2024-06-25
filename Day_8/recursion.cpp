#include <iostream>
#include <string>

using namespace std;

int recursion(int n)
{
    if (n > 0)
    {
        return n + recursion(n - 1);
    }
    else
    {
        return 0;
    }
};

int main()
{


    cout << recursion(10);

    return 0;
}