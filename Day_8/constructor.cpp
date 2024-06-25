#include <iostream>
#include <string>
using namespace std;

class Demon {
    public:
    string name;
    int age;
    int rank;
    void display() {
        cout << "Name is : " << name << endl
             << "Age is : " << age << endl
             << "Rank is : " << rank << endl;
    }

    Demon(string n, int a, int r);

};

Demon::Demon(string n, int a, int r) {
    name = n;
    age = a;
    rank = r;
}


int main() {
    Demon Nezuko("Nezuko", 18, 1);

    Nezuko.display();


    return 0;
}