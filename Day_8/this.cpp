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
};


int main(){

    Gamer g("Nikhil", 21);
    cout << g.name << endl;
    cout << g.age << endl;

    return 0;
}