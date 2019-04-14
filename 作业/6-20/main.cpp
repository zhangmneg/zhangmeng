#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    cout<<"请输入一对整数";
    int x=0;
    int y=0;
    cin>>x>>y;
    if(fmod(y,x)==0)
        cout<<"ture";
    else
        cout<<"false";
}
