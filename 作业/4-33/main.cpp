#include <iostream>

using namespace std;
double x;
double y;
double z;
int a=0;
int s=0;
int d=0;
int main()
{
    cout<<"�����������ε������ߣ��γ����ж����������ܷ����������"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    while(x>0&&y>0&&z>0)
    {
        a=x*x+y*y;
        s=y*y+z*z;
        d=x*x+z*z;
        if((a=z)||(s=x)||(d=y))
            cout<<"�������߿������ֱ��������";
        else
            cout<<"�������߲������ֱ��������"<<endl;
            cin>>x;
            cin>>y;
            cin>>z;
    }
    return 0;
}

