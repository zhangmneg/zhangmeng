#include <iostream>

using namespace std;

int main()
{
    int number=0;
    cout <<"请输入一个整数"<<endl;
    cin>>number;
    if (number%2==0)
        cout <<"这个数是偶数"<<endl;
     if (number%2!=0)
        cout <<"这个数是奇数"<<endl;
    return 0;
}
