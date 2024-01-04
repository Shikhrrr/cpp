#include <iostream>
using namespace std;

int main(void)
{
    //t = thickness
    int t;
    cin >> t;
    int h = t * 3;

    //top portion 
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (j == t/2 - i)
            {
                cout << "/";
            }
            else if ( j == t/2 + i)
            {
                cout << "\\";
            }

            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}