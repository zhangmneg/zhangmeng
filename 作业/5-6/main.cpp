#include <iostream>

using namespace std;

int main()
{   cout<<"请输入数字，本程序将计算他们得平均值,当你输入9999时将计算前面数得平均值"<<endl;
    unsigned int i=0;
    unsigned int z=0;
    unsigned int average=0;
    for(unsigned int x=0;x!=9999;++i)

    {

        cin >>x;
        z+=x;
    }
    average=(z-9999)/(i-1);
    cout<<"\n这些数得平均值为； "<<average<<endl;
    return 0;

}
