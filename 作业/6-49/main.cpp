#include <iostream>
#include <iomanip>
using namespace std;
double circleArea(double );
int main()
{
    cout<<"������һ��Բ�İ뾶��";
    int x=0;
    cin>>x;
    cout<<"Բ�����Ϊ��"<<circleArea(x );
}
double circleArea(double  x )
{
    double  s=0;
    s=x*x*3.14;
    return s;
}
