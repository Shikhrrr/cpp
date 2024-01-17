//WRONG ANSWER

#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;
    friend float distance(point a, point b);

    public:
        point(int a, int b);

        void display(){
            cout << "(" << x << "," << y << ")" << endl;
        }
};

point ::point(int a, int b)
{
    x = a;
    y = b;
}

float distance(point a, point b)
{
    float ans = pow((a.x - b.x), 2) - pow((a.y - b.y), 2);
    return sqrt(ans);
}

int main(void)
{
    point a(3,4);
    point b(4,5);

    float ans = distance(a, b);
    cout << ans;
}