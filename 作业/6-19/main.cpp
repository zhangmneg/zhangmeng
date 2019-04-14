#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"请输入三角形的两条边长，hypotenuse函数将计算斜边的长";
    double x=0;
    double y=0;
    double z=0;
    cin >>x>>y;
    cout<<"斜边长为："<<sqrt(x*x+y*y)<<endl;
}
