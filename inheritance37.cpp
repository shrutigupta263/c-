#include <iostream>
using namespace std;
//base class
class employee
{
    public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee(){}
};
//derived class 
class programmer : public employee
{
    public:
    int languagecode;
    programmer (int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void getdata()
    {
        cout<<id<<endl;
    }
};
int main()
{
  employee shruti(1), xyc(2);
  cout<<shruti.salary <<endl;
  cout<<xyc.salary <<endl;
  programmer skillF(10);
  cout<< skillF.languagecode<<endl;
  cout<<skillF.id<<endl;
  skillF.getdata();
  return 0;
}