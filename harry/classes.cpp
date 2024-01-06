#include <iostream>
using namespace std;

typedef class Employee 
{
    private:
        int salary;

    public:
        int id, age, depCode;
        void setData(int a)
        {
            salary = a;
        }

        void getData();
} emp;

void emp :: getData()
{
    cout << id << endl;
    cout << salary << endl;
}

int main(void)
{
    emp shikhar;
    shikhar.id = 5;
    shikhar.age = 19;
    shikhar.depCode = 1;

    shikhar.setData(55);

    shikhar.getData();
}