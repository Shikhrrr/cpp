#include <iostream>
using namespace std;

class complex {
    int a, b;
    public:
        void getData(void){
            cout << a << " " << b << endl;
        }

        complex(){
            a = 55;
            b = 66;
        };
        complex (int x, int y) : a(x), b(y){};
};

int main(void)
{
    int *ptr = new int(50);

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;

    cout << *ptr << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << arr[2] << endl;

    complex *comp = new complex(1,2);
    (*comp).getData();
    comp->getData();

    //object array

    complex *compArr = new complex[3];
    
    compArr->getData();
    (compArr+1)->getData();
    (compArr+2)->getData();

    //usual method
    
    complex obj1(101, 66);
    complex compArr2[] = {obj1};

    compArr2[0].getData();
}