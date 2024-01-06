#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;   //by default, s will be private if not declared

    public:
        void input(void);
        void check_bin(void);
        void complim(void);
        void display(void);
};

void binary :: input(void)
{
    cin >> s;
}

void binary :: check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary number" << endl;
            exit(0);
        }
    }
}

void binary :: complim(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }

        else 
        {
            s.at(i) = '1';
        }
    }
}

void binary :: display(void)
{
    cout << s << endl;
}

int main(void)
{
    binary num;

    num.input();
    num.check_bin();
    num.display();
    num.complim();
    num.display();
}