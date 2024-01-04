#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> nums(n);
    nums[0] = 0;
    nums[1] = 1;

    cout << nums[0] << " " << nums[1] << " ";

    for (int i = 2; i < n; i++)
    {
        nums[i] = nums[i - 2] + nums[i - 1];
        cout << nums[i] << " ";
    }

    cout << endl;

    //alternate method
    
    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;

    } 
}