#include <iostream>
using namespace std;

class Calculator
{
public:
    int *num1;
    int *num2;

    // Constructor
    Calculator(int ident1, int ident2)
    {
        num1 = new int; // Allocate memory for num1
        num2 = new int; // Allocate memory for num2
        *num1 = ident1; // Initialize num1 with ident1
        *num2 = ident2; // Initialize num2 with ident2
    }

    // Destructor
    ~Calculator()
    {
        delete num1; // Free memory allocated for num1
        delete num2; // Free memory allocated for num2
    }

    // Method to add numbers
    int add()
    {
        int sum = *num1 + *num2; // Sum the values pointed to by num1 and num2
        return sum;
    }
};

int main()
{
    Calculator myObject(20, 20); // Create an instance of Calculator
    int result = myObject.add(); // Call add method
    cout << result;              // Output the result
    return 0;
}
