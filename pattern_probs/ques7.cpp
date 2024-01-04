#include <iostream>
using namespace std;

int main(void)
{
    int height;
    cin >> height;
    int base = 2*height - 1;

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j <= base; j++)
        {
            if (j >= height - i && j <= base - i)
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