#include <iostream>

using namespace std;
double r;
int main()
{cout<<"请输入一个圆的半径"<<endl;
  cin>>r;
    while(r>0)
    {
        cout<<"圆的值直径是 "<<2*r<<"\n圆的周长是 "<<r*3.14159<<"\n圆的面积是 "<<r*r*3.14159<<endl;
        cin>> r;

    }
}
