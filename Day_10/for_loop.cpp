#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Read two integers from standard input
    cin >> a >> b;

    // Loop from a to b inclusive
    for (int i = a; i <= b; i++)
    {
        if (i >= 0 && i <= 9) // Check if i is between 0 and 9
        {
            cout << numbers[i] << endl; // Print the corresponding word
        }
        else
        {
            if (i % 2 == 0) // Check if the number is even
            {
                cout << "even" << endl; // Print "even"
            }
            else // If the number is odd
            {
                cout << "odd" << endl; // Print "odd"
            }
        }
    }
    return 0;
}
