#include <iostream>
using namespace std;

class base1
{
    int a;
    int b;
    public:
        base1(int i, int j) : a(i), b(j + a)
        {
            cout << a << endl << b << endl;
        }
};

int main(void)
{
    base1 object1(1, 2);
}