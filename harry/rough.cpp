#include <iostream>
using namespace std;

void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int x = 5;
    int y = 3;

    cout << x << " " << y << endl;

    swap(x, y);

    cout << x << " " << y << endl;
}