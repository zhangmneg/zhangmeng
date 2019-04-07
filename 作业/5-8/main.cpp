#include <iostream>

using namespace std;

int main()
{   unsigned int x;
    unsigned int y;
    unsigned int z;
    cout<<"请输入需要计算得数的个数： "<<endl;
    cin>>x>>y;
    for(unsigned i=2;i<=x;i++)
    {cin >>z;

        if(z>y)
        z=y;}
        cout << "最小的数是：" <<z<< endl;

}
