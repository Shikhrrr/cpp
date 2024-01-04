#include <iostream>
using namespace std;

int main(void)
{
    int c = 1;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (i < 5)
            {
                cout << c;
                cout << "  ";
                c++;
            }

            else if (i == 5)
            {
                cout << c;
                cout << " ";
                c++;
            }
        }
        cout << endl;
    }
}