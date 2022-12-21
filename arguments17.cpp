#include <stdio.h>
using namespace std;

//arguments in c++
float moneyreceived(int currentmoney, float factor=1.04)
{
    return currentmoney * factor;
}
int main()
{
    int money = 10000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyreceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyreceived(money, 1.1)<<"Rs after 1 year ";
    return 0;
}