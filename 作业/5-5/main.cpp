#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y;
    int z=0;
    cout <<"������������ĸ���"<<endl;
    cin>>x;
    cout<<"��������Ҫ��ӵ���"<<endl;
   for (unsigned int i=1;i<=x;++i)
   {
       cin>> y;
       z+=y;
   }
   cout<<"���������Ϊ; "<<x<<"\n�����ӵ���Ϊ"<<z<<endl;
}
