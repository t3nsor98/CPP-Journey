#include <iostream>
#include <string>
using namespace std;

class Hashira {
    public:
    string name;
    int age;

    void display() {
        cout << "Name is : " << name << endl
             << "Age is : " << age << endl;
    }

    Hashira(string n, int a) {
        name = n;
        age = a;
        cout<<"Constructor called"<<endl;
    }

    Hashira(){
        cout<<"Default constructor called"<<endl;
    }

};


int main() {
    Hashira H1;
    Hashira H2("Digbijaya Lenka", 21);
    H2.display();


    return 0;
}