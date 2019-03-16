#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;
    cout<<"请输入数字1和数字2，用空格隔开"<<endl;
    cin>>number1>>number2;
    if ( number1>number2 )
        cout << number1 << " is large"<< endl;
    if ( number2>number1 )
        cout << number2 << " is large" << endl;
    if ( number1==number2 )
        cout <<"these numbers are equal"<<endl;

    return 0;
}
