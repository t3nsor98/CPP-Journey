#include <iostream>

using namespace std;

class Person
{

private:
    string name;
    int age;
    int salary;

public:
    void set_name(string n) { name = n; };
    void get_name() { cout << name << endl; };
    void display() { cout << "Name is :" << name << endl; };
};
int main()
{
    Person P1;
    P1.set_name("Digbijaya Lenka");
    P1.display();

    P1.get_name();

    return 0;
}
