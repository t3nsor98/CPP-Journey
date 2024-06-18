#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";

    food = "Burger";

    cout << food << "\n";
    cout << meal << "\n";

    meal = "Roll";

    cout << food << "\n";
    cout << meal << "\n";

    return 0;
}