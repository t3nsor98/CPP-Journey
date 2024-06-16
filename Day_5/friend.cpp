#include <iostream>
using namespace std;

class Rectangle
{
    int length; // Private member
public:
    // Friend function declaration
    friend void display(Rectangle r);

    // Member function to set the length
    void setLength(int l)
    {
        length = l;
    }
};

// Definition of the member function
void Rectangle::setLength(int l)
{
    length = l;
}

// Definition of the friend function
void display(Rectangle r)
{
    // Accessing the private member 'length' of the class 'Rectangle'
    cout << "Entered length of rectangle is " << r.length << endl;
}

int main()
{
    Rectangle r;
    r.setLength(10); // Setting the length using member function
    display(r);      // Calling the friend function to display the length
    return 0;
}
