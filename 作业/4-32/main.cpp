#include <iostream>

using namespace std;
double x;
double y;
double z;
int main()
{
    cout<<"�����������ε������ߣ��˳����ж����������ܷ����������"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    while(x>0&&y>0&&z>0)
    {
        if(x+z>y&&x+y>z&&z+y>x&&x-z<y&&x-y<z&&y-z<x&&y-x<z&&z-x<y&&z-x<y)
            cout<<"�������߿������������"<<endl;
        else
            cout<<"�������߲������������"<<endl;
            cin>>x;
            cin>>y;
            cin>>z;
    }
    return 0;
}
