#include <iostream>
using namespace std;

int main(void)
{
    int arr[] = {1,2,1,3,3};
    
    for (int i = 0; i < 4; i++)
    {
        int c = 0; 
        for (int j = i + 1; j < 5; j++)
        {
            // if (arr[i] == arr[j])
            // {
            //     c = 1;
            //     break;
            // }
        }
        
        if (c == 0)
        {
            return arr[i];
            cout << arr[i];
        } 

        cout << "new";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "new";
    }

}