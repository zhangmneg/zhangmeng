#include <iostream>

using namespace std;

int main()
{
    for ( unsigned int count=1;count<=10;count++)
    {
        if(count!=5)
            cout<<count<<"";
    }
    cout<<"使用if条件跳过打印5"<<endl;
}
