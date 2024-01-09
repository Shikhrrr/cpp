#include <iostream>
using namespace std;

class employee
{
    int id;
    public:
        float salary = 34.0;

        employee(){}

        employee(int inpID){
            id = inpID;
        }
};

class programmer : public employee
{
    public:
    int id;
        programmer(){}

        programmer(int inpID){
            id = inpID;
        }
};

int main(void)
{
    programmer shikhar(1);
    cout << shikhar.id << endl;
    cout << shikhar.salary << endl;
}