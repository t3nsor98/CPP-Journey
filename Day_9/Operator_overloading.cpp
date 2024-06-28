#include <iostream>
using namespace std;

// Define a class named Complex to represent complex numbers
class Complex
{
private:
    int real, imag; // Private data members to store the real and imaginary parts of the complex number

public:
    // Constructor to initialize a Complex object with given real and imaginary parts
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload the + operator to add two Complex objects
    Complex operator+(Complex const &obj)
    {
        Complex res;                // Create a new Complex object to store the result
        res.real = real + obj.real; // Add the real parts of the two complex numbers
        res.imag = imag + obj.imag; // Add the imaginary parts of the two complex numbers
        return res;                 // Return the resulting Complex object
    }

    // Function to print the complex number
    void print() { cout << real << " + i" << imag << '\n'; }
};

// The main function
int main()
{
    Complex c1(10, 5), c2(2, 4); // Create two Complex objects with specified real and imaginary parts
    Complex c3 = c1 + c2;        // Use the overloaded + operator to add c1 and c2, and store the result in c3
    c3.print();                  // Print the resulting complex number
}
