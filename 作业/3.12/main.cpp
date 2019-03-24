#include <iostream>
#include"Account.h"
using namespace std;
int main()
{


cout<<"请输入两个账户的初始金额"<<endl;
int x;
int y;

Account zhangyushi(x);
Account zhaofuxi(y);
cout<<"zhangyushi您的存款余额为:"<<zhangyushi.getBalance()<<endl;
cout<<"zhaofuxi您的账户余额为:"<<zhaofuxi.getBalance()<<endl;

cout<<"请输入两位的存款金额"<<endl;

int c;
int v;
if(c>0)
{
    zhangyushi.credit(c);
cout<<"zhangyushi您选择了存款，您现在的余额为："<<zhangyushi.getBalance()<<endl;
}
if(c<0)
   {
     zhangyushi.debit(c);
     cout<<"zhangyushi您选择了取款，您现在的余额为："<<zhangyushi.getBalance()<<endl;
   }

if(v<0)
{
    zhaofuxi.debit(v);
    cout<<"zhaofuxi您选择了取款，您现在的余额为："<<zhaofuxi.getBalance()<<endl;
}
if(v>0)
{
    zhaofuxi.credit(v);
    cout<<"zhaofuxi您选择了存款，您现在的余额为："<<zhaofuxi.getBalance()<<endl;
    return 0;
}
}

