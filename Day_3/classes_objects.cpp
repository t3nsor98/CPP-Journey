#include <iostream>
using namespace std;

class Emmployee
{

public:
    string name;
    int age;
    int salary;
    void display() { cout << "Name is :" << name << endl
                          << "Age is :" << age << endl
                          << "Salary is :" << salary << endl; }
};
int main()
{
    Emmployee e1;
    e1.name = "Nikhil";
    e1.age = 21;
    e1.salary = 30000;
    cout << e1.name << endl;
    cout << e1.age << endl;
    cout << e1.salary << endl;
    e1.display();

    cout << e1.name.length()<<endl;
    cout << e1.name.size();

    return 0;
}