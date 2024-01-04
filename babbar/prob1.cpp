#include <iostream>
#include <vector>
using namespace std;

int sum(int n);
int product(int n);

int main(void)
{
    int n;
    cout << "enter number: ";
    cin >> n;

    int ans = product(n) - sum(n);

    cout << ans;
}

int sum(int n)
{
    int sum = 0;
    
    do 
    {
        int number = n % 10;
        sum += number;
        n = n / 10;
    }
    while (n != 0);

    return sum;
}

int product(int n)
{
    int prod = 1;

    do 
    {
        int number = n % 10;
        prod = prod * number;
        n = n / 10;
    }
    while (n != 0);

    return prod;
}