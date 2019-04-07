#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int largest=0;
    cout<<"请输入十个数，本程序将计算他们的最大值"<<endl;
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
