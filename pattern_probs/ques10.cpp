#include <iostream>
using namespace std;

int main(void)
{
    int height;
    cin >> height;
    int c = 1;
    int base = 2*height - 1;
    int pos = (base + 1) / 2;

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j <= base; j++)
        {
            if (j >= pos - i && j <= pos + i)
            {
                if (c == 1)
                {
                    cout << i + 1;
                    c = 0;
                }

                else if (c == 0)
                {
                    cout << " ";
                    c = 1;
                }
            }

            else 
            {
                cout << " ";
            }
        }
        cout << endl;
        c = 1;
    } 
}