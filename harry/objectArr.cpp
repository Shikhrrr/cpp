#include <iostream>
using namespace std;

class shop {
    int id, price;
    public:
        void set(int, int);
        void get();

        ~shop(){};
};

void shop :: set(int a, int b) {
    id = a;
    price = b;
}

void shop :: get() {
    cout << id << " " << price << endl;
}

int main(void)
{
    shop *shops = new shop[3];
    int a, b;
    shop* temp = shops;

    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        shops->set(a, b);
        shops++;
    }

    shops = temp;

    for (int i = 0; i < 3; i++) {
        shops->get();
        shops++;
    }

    shops = temp;
}