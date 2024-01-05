#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int arr[n];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 0; i < n - 2; i++)
    {
        arr[2 + i] = arr[0 + i] + arr[1 + i];
    }
    
    //just to check

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    int index;
    cout << "enter index: ";
    cin >> index;
    while (index > n)
    {
        cout << "Enter correct index\n";
        cin >> index;
    }
 
    cout << arr[index] << endl;
}