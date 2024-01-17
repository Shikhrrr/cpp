#include <iostream>
using namespace std;

class base {
    public:
        int b;
        void setb(int b) {
            (*this).b = b;
        }

        void display () {
            cout << "Base: " << b << endl;            
        }
};

class derived : public base {
    public:
        int d;
        void setd (int d) {
            this->d = d;
        }

        void display() {
            cout << "Derived: " << d << endl;
        }
};

int main(void)
{
    derived d1;
    base* p2base;

    p2base = &d1;

    p2base->setb(4);
    p2base->display();

    derived* p2derived;
    p2derived = &d1;

    p2derived->setd(5);
    p2derived->display();
}