// main.cpp
#include <iostream>
extern "C"
{
#include <stdio.h>
}

void printSum(int a, int b)
{
    printf("Sum: %d\n", a + b);
}

int main()
{
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    printSum(a, b);
    return 0;
}
