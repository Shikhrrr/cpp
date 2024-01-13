#include <iostream>
#include <cmath>

#define pi 3.14

using namespace std;

class SimpleCalculator
{
    protected:
        int a;
        int b;
        int ans;
    
    public:

        friend class ScientificCalculator;

        int add(int, int);
        int subtract(int, int);
        int multiply(int, int);
        int divide(int, int);

        void display()
        {
            cout << ans << endl;
        }
};

int SimpleCalculator ::add(int a, int b)
{
    ans = a + b;
    return ans;
}

int SimpleCalculator ::subtract(int a, int b)
{
    ans = a - b;
    return ans;
}

int SimpleCalculator ::multiply(int a, int b)
{
    ans = a * b;
    return ans;
}

int SimpleCalculator ::divide(int a, int b)
{
    ans = a / b;
    return ans;
}

class  ScientificCalculator
{
     protected:
         int a, b, ans;

    public:
        int square(int);
        int cube(int);
        float areaCircle(int);
        float sinValue(float);
};

int ScientificCalculator ::square(int a)
{
    ans = a * a;
    return ans;
}

int ScientificCalculator ::cube(int a)
{
    ans = a*a*a;
    return ans;
}

float ScientificCalculator ::areaCircle(int r)
{
    r = float(r);
    SimpleCalculator ::ans = pi * r * r;
    return SimpleCalculator ::ans;
}

float ScientificCalculator ::sinValue(float a)
{
    ans = sin(a);
    return ans;
}

class HybridCalculator : virtual public ScientificCalculator, virtual public SimpleCalculator
{
    public:
        int factorial(int);
};

int HybridCalculator ::factorial(int n)
{
    for (int i = 1; i <= n; i++)
    {
        SimpleCalculator ::ans = 1 * i;
    }

    return SimpleCalculator ::ans;
}

int main(void)
{
    HybridCalculator values;
   
    values.areaCircle(3);
    values.display();

    values.factorial(5);
    values.display();
    
    values.multiply(4, 5);
    values.display();
}