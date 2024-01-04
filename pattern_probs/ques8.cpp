#include <iostream>
using namespace std;

int main(void)
{
    int height;
    cin >> height;
    int base = 2*height - 1;
    for (int i = 0; i < height; i++)
    {
        if (i == 0 || i == height - 1)
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

        else if (i != 0 || i != height - 1)
        {
            for (int k = 1; k <= base; k++)
            {
                if (k == height - i || k == base - i)
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
}