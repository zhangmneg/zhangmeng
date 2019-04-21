#include <iostream>
#include <iomanip>
using namespace std;
double circleArea(double );
int main()
{
    cout<<"请输入一个圆的半径：";
    int x=0;
    cin>>x;
    cout<<"圆的面积为："<<circleArea(x );
}
double circleArea(double  x )
{
    double  s=0;
    s=x*x*3.14;
    return s;
}
