#include <iostream>
using namespace std;
int main ()
{
    int a=3;
    int* n=&a;
    cout<<"the value of b is "<<*n<<endl;
    cout<<"the value of a is "<<a<<endl;
    int** c=&n;
    cout<<"the value of c is "<<**c<<endl;
    return 0;
}