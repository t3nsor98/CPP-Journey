#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    int salary;
    void display() { cout << "Name is :" << name << endl
                          << "Age is :" << age << endl
                          << "Salary is :" << salary << endl; }
};

int main() {

    Person Diggy;
    Diggy.name = "Digbijaya Lenka";
    Diggy.age = 21;
    Diggy.salary = 30000;
    // cout << Diggy.name << endl;
    // cout << Diggy.age << endl;
    // cout << Diggy.salary << endl;
    Diggy.display();


    return 0;
}