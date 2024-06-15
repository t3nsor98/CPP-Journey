#include <iostream>
#include <string>

using namespace std;

class Student{
  public:
  string name;
  int roll_no,age, standard;  
  //data attributes
};

int main(){
    // string name;
    // int roll_no,age, standard;
    // cin>>name>>roll_no>>age>>standard;
    // cout<<name<<endl<<roll_no<<endl<<age<<endl<<standard<<endl;
    Student s1;
    s1.name = "Nikhil";
    s1.roll_no = 21;
    s1.age = 24;
    s1.standard = 17;
    cout<< s1.name << endl << s1.roll_no << endl << s1.age << endl << s1.standard << endl;

    return 0;
}