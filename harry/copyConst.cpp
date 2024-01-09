#include <iostream>
using namespace std;

class number
{
    int a;
    public:
        number(){};

        number (int num){
            a = num;
        }

        number(number &obj)
        {
            cout << "Copy constructor called" << endl;
            a = obj.a;
        }

        void show(){
            cout << a << endl;
        }
};

int main(void)
{
    number x(4), z2;
    x.show();

    z2 = x;
    z2.show();

    number z(x);
    z.show(); 
}