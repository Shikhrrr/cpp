#include <iostream>
using namespace std;

class shop
{
    private:
        int id[100];
        int price[100];

    public:
        int counter;
        void initCounter(void)
        {
            counter = 0;
        }

        void setPrice(void);
        void display(int i);
};

void shop :: setPrice(void)
{
    cout << "Enter id: ";
    cin >> id[counter];
    cout << "Enter price: ";
    cin >> price[counter];
    counter++;
}

void shop :: display(int i)
{
    cout << "The price of " << id[i] << " is " << price[i] << endl; 
}

int main(void)
{
    shop dukaan;
    dukaan.initCounter();

    for (int i = 0; i < 3; i++)
    {
        dukaan.setPrice();
    }

    for (int i = 0; i < dukaan.counter; i++)
    {
        dukaan.display(i);
    }
}