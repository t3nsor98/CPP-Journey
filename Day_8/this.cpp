#include <iostream>
using namespace std;

class Gamer {
    public:
    string name;
    int age;
    Gamer(string n, int a) {
        this->name = n;
        this->age = a;
    }

    Gamer(Gamer &g) {
        cout<<"Copy constructor called"<<endl;
        this->name = g.name;
        this->age = g.age;
    }
};


int main(){

    Gamer g("Nikhil", 21);
    cout << g.name << endl;
    cout << g.age << endl;

    Gamer g1(g);
    cout << g1.name << endl;
    cout << g1.age << endl;

    return 0;
}