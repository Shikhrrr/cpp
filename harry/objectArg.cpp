#include <iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        void setData(void);
        void sum(complex o1, complex o2);
};

void complex :: setData(void)
{
    cin >> a >> b;
}

void complex :: sum(complex o1, complex o2)
{
    int a = o1.a + o2.a;
    int b = o1.b + o2.b;

    cout << a << " + i" << b << endl;
}

int main(void)
{
    complex num1, num2;
    num1.setData();
    num2.setData();

    num2.sum(num1, num2);
}