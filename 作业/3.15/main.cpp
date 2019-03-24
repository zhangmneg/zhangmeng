#include <iostream>
#include"Date.h"


using namespace std;

int main()
{
    Date date(2,3,1999);
    cout<<"Month: "<<date.getMonth()<<endl;
    cout<<"Day: "<<date.getDay()<<endl;
    cout<<"Year: "<<date.getYear()<<endl;
    cout<<"\noriginal Date"<<endl;
    date.displayDate();
    date.setMonth(14);
    date.setDay(3);
    date.setYear(2737);
    cout<<"\nnew date: "<<endl;
    date.displayDate();
    return 0;
}
