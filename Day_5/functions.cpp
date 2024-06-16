#include<iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
};

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int result = add(num1, num2);
    cout << "The sum of these two number is: " << result;
}