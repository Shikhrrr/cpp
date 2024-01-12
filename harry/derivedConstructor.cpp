#include <iostream>
using namespace std;

class base1
{
    int data1;
    public:
        base1(int n)
        {
            data1 = n;
            cout << "Base1 called\n";
        }

        void show1(void)
        {
            cout << data1 << endl;
        }
};

class base2
{
    int data2;
    public: 
        base2(int n)
        {
            data2 = n;
            cout << "base2 called\n";
        }

        void show2()
        {
            cout << data2 << endl;
        }
};

class derived : public base2, virtual public base1
{
    int data3;
    public:
        derived(int a, int b, int c) : base1(a), base2(b)
        {
            data3 = c;
            cout << "derived constructor called\n";
        }

        void show3(void)
        {
            cout << data3 << endl;
        }
};

int main(void)
{
    derived shikhar(1, 2, 3);

    shikhar.show2();
    shikhar.show3();
}