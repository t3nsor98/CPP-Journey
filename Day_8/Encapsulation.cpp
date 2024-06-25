#include <iostream>
using namespace std;

class Employee
{

private:
    int pass;

public:
    void setpass(int p)
    {
        pass = p;
    }
    void getpass()
    {
        cout << pass << endl;
    }
};

int main()
{
    Employee Dignijaya;
    Dignijaya.setpass(123456988);
    Dignijaya.getpass();

    return 0;
}