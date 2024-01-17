#include <iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        complex(int x, int y);
        void display()
        {
            cout << a << " + i" << b << endl;
        }
};

complex ::complex(int x, int y){
    a = x;
    b = y;
}

int main(void)
{
    complex a(15, 6);
    a.display();

    complex b = complex(6, 7);
    b.display();
}