#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    protected: 
        string name;
    public:
        int id = 0;
        int age;

        Employee(){
            name = "Tom Cruise";
            id = ++id;
        }
        Employee(string s)
        {
            name = s;
        }

        void displayName()
        {
            cout << name << endl << id;
        }
};

class Engineer : public Employee
{
    protected:
        string branch;
    public:
        int id;

    Engineer(){
        branch = "Computer Science";
    }
    Engineer(string b)
    {
        branch = b;
    }

    void displayBranch()
    {
        cout << branch << endl;
    }
};

class Programmer : public Engineer
{
    protected:
        string language;
    public:
        int id;


        Programmer(){
            language = "C++";
        }
        Programmer(string l)
        {
            language = l;
        }

        void displayLanguage()
        {
            cout << language << endl;
        }
};

int main(void)
{
    Programmer shikhar("c++");
    shikhar.displayBranch();
    shikhar.displayName();
    shikhar.displayLanguage();
}