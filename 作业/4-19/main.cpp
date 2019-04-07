#include <iostream>

using namespace std;
int number=0;
int counter=1;
int largest=0;
int secondlargest=0;

int main()
{
    cout<<"请输入十个数字，本程序将计算出他们的最大的两个值"<<endl;

   while(counter<=10)
   {
     cin>>number;
     ++counter;
     if(number>largest)
   {
       secondlargest=largest;
       largest=number;


   }

   }



       cout<<"the largest is "<<largest<<"\nthe second largest is "<<secondlargest<<endl;

}
