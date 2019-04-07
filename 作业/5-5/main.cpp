#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y;
    int z=0;
    cout <<"请输入相加数的个数"<<endl;
    cin>>x;
    cout<<"请输入需要相加的数"<<endl;
   for (unsigned int i=1;i<=x;++i)
   {
       cin>> y;
       z+=y;
   }
   cout<<"相加数个数为; "<<x<<"\n最后相加得数为"<<z<<endl;
}
