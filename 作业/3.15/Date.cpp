#include <iostream>
#include"Date.h"
using std::cout;
using std::endl;
Date::Date(int m,int d,int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);

}
void Date::setMonth(int m)
{
    Month= m;
if(Month<1)
{
    Month=1;
}
if(Month>12)
{
    Month=1;
}
}
int Date::getMonth()
{
    return Month;
}
void Date::setDay(int d)
{
    Day=d;
}
int Date::getDay()
{
    return Day;
}
void Date::setYear(int y)
{
    Year=y;
}
int Date::getYear()
{
    return Year;
}
void Date::displayDate()

{
    cout<<Month<<"/"<<Day<<"/"<<Year<<endl;
}
