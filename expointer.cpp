#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    int *address = &num;
    cout<<num <<endl<< address<<endl;
    cout<<*address;

    return 0;
}