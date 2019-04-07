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
    cout<<"请输入三角形的三条边，次程序将判断这三条边能否组成三角形"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    while(x>0&&y>0&&z>0)
    {
        a=x*x+y*y;
        s=y*y+z*z;
        d=x*x+z*z;
        if((a=z)||(s=x)||(d=y))
            cout<<"此三条边可以组成直角三角形";
        else
            cout<<"此三条边不能组成直角三角形"<<endl;
            cin>>x;
            cin>>y;
            cin>>z;
    }
    return 0;
}

