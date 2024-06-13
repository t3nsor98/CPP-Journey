class abc
{
    int x, y;

public:
    abc()
    {
        x = 100;
        y = 200;
    }

    abc(int a)
    {
        x = a;
        y = 200;
    }

    abc(int a, int b)
    {
        x = a;
        y = b;
    }
};
int main()
{
    abc obj1;           // Uses abc(), x = 100, y = 200
    abc obj2(150);      // Uses abc(int a), x = 150, y = 200
    abc obj3(150, 250); // Uses abc(int a, int b), x = 150, y = 250
    // ...
}
