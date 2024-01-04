#include <iostream>
using namespace std;

int main(void)
{
    int c = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            if (c == 1)
            {
                c = 0;
            }

            else if (c == 0)
            {
                c = 1;
            }
        }
        cout << endl;
        
        if (c == 0)
        {
            c = 1;
        }

        else if (c == 1)
        {
            c = 0;
        }
    }
}