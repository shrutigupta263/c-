#include <iostream>
using namespace std;
//volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
//volume of cube
int volume (int a)
{
    return ( a* a* a);
}
//rectangular bo
int volume(int l, int b, int h)
{
    return (l*b*h);
}
int main()
{
    cout<<"The volume is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume iis "<<volume(3, 6)<<endl;
    cout<<"The volume is "<<volume(3)<<endl;
    return 0;
}