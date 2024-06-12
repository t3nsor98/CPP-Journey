#include <iostream>
#include <string>
using namespace std;

int main(){

    string name = "Hello World";
    cout<<name<<endl;
    cout<<"Length of name is "<<name.length()<<endl;

    cout<<"Type your name"<<endl;
    getline(cin,name);
    cout<<"Your name is "<<name<<endl;
    return 0;
}