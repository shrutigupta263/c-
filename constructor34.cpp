#include <iostream>
using namespace std;
class number
{
  int a;
  public:
  number()
  {
    a=0;
  }
  number(int num)
  {
    a=num;
  }
  number(number &obj)
  {
    cout<<"Copy constructor called!!!"<<endl;
    a=obj.a;
  }
  void display()
  {
    cout<<"The number for the object is "<<a <<endl;
  }
};
int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(z);
    z1.display();
    
    z2=z;
    z2.display();
    
    number z3=z;
    z3.display();
    
    return 0;
}