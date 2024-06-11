#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *ptr = &num;
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << num << endl;
    cout << &num << endl;
    return 0;
}