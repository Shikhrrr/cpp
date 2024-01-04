#include <iostream>
using namespace std;

//this program does not work correctly if height is an odd number

int main(void)
{
    int h;
    cin >> h;
    int n = 2;
    
    for (int i = 1; i < h/2; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            if (j < 1 + i || j > h - i)
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // if (h % 2 == 0)
    // {
    //     n = 2;    
    // }
    // else 
    // {
    //     n = 3;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < h/2 - 1; i++)
    {
        for (int j = h; j > 0; j--)
        {
            if (j >= h/2 - i && j <= h/2 + 1 + i)
            {
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}