#include <iostream>
using namespace std;
int c=45;
int main()
{
  int a, b, c;
  cout<<"Enter the value of a:"<<endl;
  cin>>a;
  cout<<"Enter the vlue f b:"<<endl;
  cin>>b;
  c=a+b;
  cout<<"The sum is "<<c<<endl;
  cout<<"The global c is"<<::c;
  return 0;
}