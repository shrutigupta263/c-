#include <iostream>
using namespace std;

//struct employe //
 typedef struct employe
{
    int eId;
    char favchar;
    float salary;
}sp;
int main()
{
    //struct employe harry;//
    sp harry;
    harry.eId=1;
    harry.favchar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
}

