#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend class functions;
    public:
        void setData(int n)
        {
            val1 = n;
        }

        void display()
        {
            cout << val1 << endl;
        }
};

class c2
{
    int val2;
    friend class functions;
    public:
        friend void swap(c1 &, c2 &);
        void setData(int n)
        {
            val2 = n;
        }

        void display()
        {
            cout << val2 << endl;
        }
};
class functions
{   public: 
    static void swap(c1 &x, c2 &y)
    {
        int temp = x.val1;
        x.val1 = y.val2;
        y.val2 = temp;
    }
};

int main(void)
{
    c1 oc1;
    c2 oc2;

    oc1.setData(5);
    oc2.setData(6);

    oc1.display();
    oc2.display();

    functions::swap(oc1, oc2);

    cout << "For oc1: ";
    oc1.display(); 

    cout << "For oc2: ";
    oc2.display();
}