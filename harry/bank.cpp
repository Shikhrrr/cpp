#include <iostream>
using namespace std;

class bank
{
    int principle, time;
    float rate;
    float returnval;

    public:
        bank(){};
        bank(int p, int t, int r);
        bank(int p, int t, float r);

        void show()
        {
            cout << "The principle entered is " << principle
            << ", rate entered is " << rate << ", the time is " << time << " years."
            << endl << "The return value is " << returnval << endl;
        }
};

bank ::bank(int p, int t, int r)
{
    principle = p;
    time = t;
    rate = float(r) / 100;

    returnval = p + (p*r*t) / 100;
}

bank ::bank(int p, int t, float r)
{
    principle = p;
    time = t;
    rate = r;

    returnval = 0;

    returnval = p + (p*r*t) / 100;
}

int main(void)
{
    int p;
    int t;
    int r;
    float R;

    bank b1, b2;

    cout << "Enter details p, t, r: ";  
    cin >> p >> t >> r;
    b1 = bank(p, t, r);
    b1.show();

    cout << "Enter details p, t, R: ";
    cin >> p >> t >> R;
    b2 = bank(p, t, R);
    b2.show();
}