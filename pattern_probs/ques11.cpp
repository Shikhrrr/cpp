#include <iostream>
using namespace std;

int main(void)
{
    int height;
    cin >> height;
    int base = 2*height - 1;
    int pos = (base + 1) / 2;

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j <= base; j++)
        {
            if (j <= pos + i && j >= pos - i)
            {
                if (j <= pos)
                {
                    cout << pos - j + 1;
                }

                else if (j > pos)
                {
                    cout << j - pos + 1;
                }
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}