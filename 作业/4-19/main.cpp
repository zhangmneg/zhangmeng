#include <iostream>

using namespace std;
int number=0;
int counter=1;
int largest=0;
int secondlargest=0;

int main()
{
    cout<<"������ʮ�����֣������򽫼�������ǵ���������ֵ"<<endl;

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
