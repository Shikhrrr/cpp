//a = cin.get() used to get ascii value of characters

#include <iostream>
using namespace std;

int main(void)
{
    int i = 1;
    int n = 4;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}