#include <iostream>
using namespace std;

class complex
{
    int a, b;
    
    public:
        void setData(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void getData(void)
        {
            cout << a << " " << b << endl;
        }

        friend complex sum(complex o1, complex o2);
};

complex sum(complex o1, complex o2)
{
    int a = o1.a + o2.a;
    int b = o1.b + o2.b;

    complex o3;
    o3.a = a;
    o3.b = b;

    return o3;
}

int main(void)
{
    complex num1, num2, num3;
    num1.setData(1, 2);
    num1.getData();

    num2.setData(3, 4);
    num2.getData();

    num3 = sum(num1, num2);

    num3.getData();
}