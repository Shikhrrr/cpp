#include <iostream>

using namespace std;

namespace apple 
{
    namespace greenApple 
    {
        void print(string a)
        {
            cout << "+ " << a << endl;
        }
    }
    void print(string a)
    {
        std::cout << a << std::endl; 
    }

    int a = 5;
}

namespace orange
{
    void print(string a)
    {
        std::cout << a;
    }
}

namespace a = apple;

int main(void)
{
    apple::print("hello world");
    cout << "duck" << endl;
    cout << a::a << endl;
    apple::greenApple::print("nyoom");
    orange::print("orange");
}

//namespaces can hold anything like functions, variables, classes etc, including child namespaces
//