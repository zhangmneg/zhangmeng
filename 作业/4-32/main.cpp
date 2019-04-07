#include <iostream>

using namespace std;
double x;
double y;
double z;
int main()
{
    cout<<"请输入三角形的三条边，此程序将判断这三条边能否组成三角形"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    while(x>0&&y>0&&z>0)
    {
        if(x+z>y&&x+y>z&&z+y>x&&x-z<y&&x-y<z&&y-z<x&&y-x<z&&z-x<y&&z-x<y)
            cout<<"此三条边可以组成三角形"<<endl;
        else
            cout<<"此三条边不能组成三角形"<<endl;
            cin>>x;
            cin>>y;
            cin>>z;
    }
    return 0;
}
