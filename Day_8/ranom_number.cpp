#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Generate a random number between 0 and 30
    int randomNum = rand() % 31;

    cout << randomNum;
    return 0;
}