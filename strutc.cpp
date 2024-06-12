#include <iostream>

using namespace std;

int main(){

    // cout << "Hello World!" << endl;
    struct Person{
        string name;
        int age;
        int salary;
    };

    Person p1;
    p1.name = "Digbijaya Lenka";
    p1.age = 21;
    p1.salary = 30000;
    cout << p1.name << endl;
    cout << p1.age << endl;
    cout << p1.salary << endl;

    Person p5;
    p5.name = "Tony Stark";
    p5.age = 32;
    p5.salary = 30000000;
    cout << p5.name << endl;
    cout << p5.age << endl;
    cout << p5.salary << endl;
    
    return 0;
}