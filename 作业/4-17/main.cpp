#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int largest=0;
    cout<<"������ʮ�����������򽫼������ǵ����ֵ"<<endl;
    while(counter<=10)
    {
        ++counter;

        cin>>number;
        if(number>largest)
           {
               largest=number;
           }

    }
    cout<<"the largest number is "<<largest<<endl;
}
