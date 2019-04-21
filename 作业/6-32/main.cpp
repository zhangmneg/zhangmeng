#include <iostream>
#include <iomanip>

using namespace std;
int qualitPoints(int);
int main()
{
    int x;
    while(x>=0)
    {
        cout<<"请输入一位同学的成绩：";
        cin>>x;
        cout<<qualitPoints(x)<<endl;
    }
    cout<<endl;
}
int qualitPoints(int x)
{
        if(x>=90&&x<=100)
            return 4;
        if(x>=80&&x<=89)
            return 3;
        if(x>=70&&x<=79)
            return 2;
        if(x>=60&&x<=69)
            return 1;
        if(x<60)
            return 0;
}
