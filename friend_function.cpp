#include <iostream>
using namespace std;

class Secret
{
private:
    int code;
public:
    friend void assign(int a)
    {
        code = a;
    };

    void display(){
        cout<<code<<endl;
    }
};

int main()
{
    Secret S1;
    
    return 0;
}