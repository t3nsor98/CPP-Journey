#include <iostream>

using namespace std;

class Person{

    private:
        string name;
        int age;
        int salary;
    public:
        void set_name(string n) { name = n; };
        void display() { cout << "Name is :" << name << endl;};
};
int main() {
    Person P1;
    P1.set_name("Digbijaya Lenka");
    P1.display();


    return 0;
}