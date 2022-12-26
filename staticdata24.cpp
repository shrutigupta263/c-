#include <iostream>
using namespace std;
class employe
{
    int id;
    static int count;
    public:
    void setdata(void)
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"The id for this employe is "<<id<<" and this employe number "<<count<<endl;
    }
    static void getcount(void)
    {
        cout<<"The value of cout is "<< count <<endl;
    }
};
int employe::count;
int main()
{
    employe harry, rohan, ranav;
    harry.setdata();
    harry.getdata();
    employe::getcount();

    rohan.setdata();
    rohan.getdata();
    employe::getcount();

    ranav.setdata();
    ranav.getdata();
    employe::getcount();
    return 0;

}