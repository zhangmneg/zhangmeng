#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int number3=0;
    int number4=0;
    int number5=0;

    cout<<"�������������"<<endl;
    cin >>number1>>number2>>number3>>number4>>number5;
    if (number1<number2&&number1<number3&&number1<number4&&number1<number5)
        cout <<"�����������Сֵ�� "<<number1<<endl;
   if (number2<number1&&number2<number3&&number2<number4&&number2<number5)
        cout <<"�����������Сֵ�� "<<number2<<endl;
        if (number3<number1&&number3<number2&&number3<number4&&number3<number5)
        cout <<"�����������Сֵ�� "<<number3<<endl;
        if (number4<number1&&number4<number2&&number4<number3&&number4<number5)
        cout <<"�����������Сֵ�� "<<number4<<endl;
        if (number5<number1&&number5<number2&&number5<number3&&number5<number4)
        cout <<"�����������Сֵ�� "<<number5<<endl;
        if (number1>number2&&number1>number3&&number1>number4&&number1>number5)
        cout <<"������������ֵ�� "<<number1<<endl;
        if (number2>number1&&number2>number3&&number2>number4&&number2>number5)
        cout <<"������������ֵ�� "<<number2<<endl;
        if (number3>number1&&number3>number2&&number3>number4&&number3>number5)
        cout <<"������������ֵ�� "<<number3<<endl;
        if (number4>number1&&number4>number2&&number4>number3&&number4>number5)
        cout <<"������������ֵ�� "<<number4<<endl;
        if (number5>number1&&number5>number2&&number5>number3&&number5>number4)
        cout <<"������������ֵ�� "<<number5<<endl;
    return 0;
}
