#include <iostream>
using namespace std;

int main(void)
{
    int arr[5] = {5,4,3,2,1};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}