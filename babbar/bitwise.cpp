#include <iostream>
using namespace std;

int main(void)
{
    int a = 4;
    int b = 6;

    cout << "a|b "<< (a|b) << endl;
    cout << (a&b) <<endl;
    cout << (~a) <<endl;
    cout << (a^b) << endl;
    cout << (17>>1) << endl;
    cout << (8 << 1) << endl;

    //right shift >> divide by 2 * no. of shifts
    //left shift << multiply by 2 * no. of shifts
    
}