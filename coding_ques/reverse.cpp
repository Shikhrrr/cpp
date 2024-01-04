#include<iostream>
#include<cmath>

using namespace std;

int digits(int n);
int reverse(int n, int t);

int main(void)
{
    int n;
    cin >> n;
    int t = digits(n);
    int ans = reverse(n, t);
    cout << ans;
}

int digits(int n)
{
    int t = 0;
    do 
    {
        t++;
        n = n / 10;   
    } 
    while (n != 0);

    return t;
}

int reverse(int n, int t)
{
    int positive = 0;
    if (n < 0)
    {
        n = n * (-1);
        positive = 1;
    }

    int num = 0;
    while (t > 0)
    {
        int digit = n % 10;
        n = n / 10;
        num += digit * pow(10, t - 1);
        t--; 
    }

    if (positive == 1)
    {
        return num * (-1);
    }

    else {
        return num;
    }
}