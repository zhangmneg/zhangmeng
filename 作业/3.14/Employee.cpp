#include <iostream>
#include"Employee.h"
Employee::Employee(string first,string last,int pay)
 {  setFirstName(first);
    setLastName(last);
    setMonthlypay(pay);

}

void Employee::setFirstName(string name)
{
    firstname=name;
}
string Employee::getFirstName()
{
    return firstname;
}
void Employee::setLastName(string name)
{
    lastname =name;
}
string Employee::getLastName()
{
    return lastname;
}
void Employee::setMonthlypay(int pay)
{
    if(Monthlypay>=0)
    {
        Monthlypay=pay;
    }
    if(Monthlypay<0)
    {
        Monthlypay=0;
    }
}
int Employee::getMonthlypay()
{
    return Monthlypay;
}
