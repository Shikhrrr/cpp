#include <iostream>
using namespace std;

class base
{
    int data1;
    
    public:
        int data2;

        void setData();
        int getData1();
        int getData2();
};

class derived : private base
{
    int data3;

    public:
        int setData3();
        int show();
};

void base ::setData()
{
    data1 = 10;
    data2 = 20;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

int derived ::setData3()
{
    setData();
    data3 = data2 * getData1();
}

int derived ::show()
{
    cout << getData1() << endl << data2 << endl << data3 << endl;
    return data3;
}

int main(void)
{
    derived der;

    // der.setData();
    der.setData3();
    
    der.show();
}