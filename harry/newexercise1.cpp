#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    protected:

    public:
    int a, b;
        void getSimple(int x, int y)
        {
            a = x;
            b = y;
        }

        void SimpleOp(void)
        {   
            cout << a + b << endl;
            cout << a - b << endl;
            cout << a * b << endl;
            cout << a / b << endl;
        }
};

class ScientificCalculator
{
    protected:

    public:
    int a, b;
        void getScientific(int x, int y)
        {
            a = x;
            b = y;
        }

        void ScientificOp()
        {
            cout << cos(a) << endl;
            cout << sin(a) << endl;   
            cout << tan(b) << endl;
            cout << exp(b) << endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};

int main(void)
{
    HybridCalculator shikhar;
    shikhar.getSimple(1, 1);
    shikhar.ScientificOp();    
}