#include <iostream>
using namespace std;
/*class complex
{
    int a,b;
    public:
    complex(int, int);
    void printnumber()
    {
        cout<<"Your number is "<< a << "+" << b << "i" <<endl;
    }
};
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex a(4, 6);
    a.printnumber();
    complex b = complex(5, 7);
    b.printnumber();
    return 0;
}
*/
class point
{
    int x, y;
    public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};
int main()
{
    point p(1, 1);
    p.displaypoint();
    point q(4, 6);
    q.displaypoint();
    return 0;
}