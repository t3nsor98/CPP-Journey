#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int px, int py) : x(px), y(py) {}
};

int main()
{
    Point p1(10, 20);
    Point p2(30, 40);
    p1 = p2; // All data members of p2 are copied to p1
    cout<<p1.x<<" "<<p1.y<<endl;
    return 0;
}
