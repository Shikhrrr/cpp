#include <iostream>
using namespace std;

int count;

class number
{
    int a;
    public:
        number()
        {
            cout << "Constructor is called" << endl;
            cout << ++count << endl;
        }

        ~number()
        {
            cout << "Destructor is called" << endl;
            cout << --count << endl;
        }
};

int main(void)
{   
    number n1;
    {
        number n2;
        number n3;
    }
    
    return 0;
}