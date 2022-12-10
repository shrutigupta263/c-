#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a=3, b=33, c=333, d=3333;
    cout<<"The value of without setw is:"<<a<<endl;
    cout<<"The value of without setw is:"<<b<<endl;
    cout<<"The value of without setw is:"<<c<<endl;

    cout<<"The value of a is:"<<setw(4)<<a<<endl;
    cout<<"The value of b is:"<<setw(4)<<b<<endl;
    cout<<"The value of c is:"<<setw(4)<<c<<endl;
    return 0;
}