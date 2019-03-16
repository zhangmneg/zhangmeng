#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int number3=0;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    cout<<"请输入三个整数，本程序将计算它们的和，平均数，乘积，最小值和最大值"<<endl;
    cin>>number1>>number2>>number3;
    sum1=number1+number2+number3;
    sum2=number1*number2*number3;
    sum3=(number1+number2+number3)/3;

    cout<<"sum is "<<sum1 <<"\nAverage is " <<sum3<<"\nProduct is "<<sum2<<endl;
    if (number1<number2&&number1<number3)
        cout <<"Smallest is " <<number1<<endl;
    if (number2<number1&&number2<number3)
        cout <<"Smallest is " <<number2<<endl;
    if (number3<number2&&number3<number1)
        cout <<"Smallest is " <<number3<<endl;
    if (number1>number2&&number1>number3)
        cout<<"Largest is "<<number1<<endl;
    if (number2>number1&&number2>number3)
        cout <<"Largest is "<<number2<<endl;
    if (number3>number1&&number3>number2)
        cout <<"Largest is "<<number3<<endl;

    return 0;
}
