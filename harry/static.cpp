#include <iostream>
using namespace std;

class newclass
{
    private:
        static int counter;

    public:
        void incCounter(void)
        {
            ++counter;
        }

        static void getCounter(void)
        {
            cout << counter << endl;
        }
};

// int newclass :: counter = 10;
int newclass :: counter;

int main(void)
{
    newclass var;

    for (int i = 0; i < 3; i++)
    {
        var.incCounter();
        newclass :: getCounter();
    }   
}