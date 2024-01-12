#include <iostream>
using namespace std;

class Student
{
    protected:
        int roll;
    public:
        void set_roll(int n)
        {
            roll = n;
        }
};

class Test : virtual public Student
{
    protected:
        int maths, physics;
    public:
        void set_marks(int n, int m)
        {
            maths = n;
            physics = m;
        }
};

class Sports : virtual public Student
{
    protected:
        int score;
    public:
        void set_score(int n)
        {
            score = n;
        }
};

class Result : public Test, public Sports
{
    protected:
        int result;
    public:
        void display()
        {
            result = maths + physics + score;

            cout << "Your final score is: " << result << endl;
        }
};

int main(void)
{
    Result shikhar;
    
    shikhar.set_roll(5);
    shikhar.set_marks(93, 95);
    shikhar.set_score(9);

    shikhar.display();
}