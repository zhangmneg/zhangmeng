#include <iostream>
#include"Account.h"
using namespace std;
int main()
{


cout<<"�����������˻��ĳ�ʼ���"<<endl;
int x;
int y;

Account zhangyushi(x);
Account zhaofuxi(y);
cout<<"zhangyushi���Ĵ�����Ϊ:"<<zhangyushi.getBalance()<<endl;
cout<<"zhaofuxi�����˻����Ϊ:"<<zhaofuxi.getBalance()<<endl;

cout<<"��������λ�Ĵ����"<<endl;

int c;
int v;
if(c>0)
{
    zhangyushi.credit(c);
cout<<"zhangyushi��ѡ���˴������ڵ����Ϊ��"<<zhangyushi.getBalance()<<endl;
}
if(c<0)
   {
     zhangyushi.debit(c);
     cout<<"zhangyushi��ѡ����ȡ������ڵ����Ϊ��"<<zhangyushi.getBalance()<<endl;
   }

if(v<0)
{
    zhaofuxi.debit(v);
    cout<<"zhaofuxi��ѡ����ȡ������ڵ����Ϊ��"<<zhaofuxi.getBalance()<<endl;
}
if(v>0)
{
    zhaofuxi.credit(v);
    cout<<"zhaofuxi��ѡ���˴������ڵ����Ϊ��"<<zhaofuxi.getBalance()<<endl;
    return 0;
}
}

