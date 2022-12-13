#include <iostream>
using namespace std;
int main()
{
    //one line 
    int marks[] = {23, 45, 56, 89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //more line 
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 2265;
    mathmarks[2] = 342;
    mathmarks[3] = 54;
    
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;


    //loop form 
    for (int i = 0; i<4; i++)
    {
        cout<<"the value of marks "<<"is "<<marks[i]<<endl;
    }


    //pointers
    int* p = marks;
    cout<<"the value of marks[0] is "<<*p<<endl;

    //pointers
    int* s = marks;
    cout<<"The value of *p is "<<*(p+1)<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;


    return 0;

    
}