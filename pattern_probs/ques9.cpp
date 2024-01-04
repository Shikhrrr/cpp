#include <iostream>
using namespace std;

int main(void)
{
    int height;
    cin >> height;
    int base = 1 + 2*(height - 1);
    int pos = (base + 1) / 2;
    
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j <= base; j++)
            {
                if (j >= pos - i && j <= pos + i)
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

        for (int i = 1; i <= height - 1; i++)
        {
            for (int j = base; j > 0; j--)
            {
                if (j >= i && j < base - i)
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
}