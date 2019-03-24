#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>
using std::string;
class Employee
{
public:
Employee(string,string,int);
void setFirstName(string);
string getFirstName();
void setLastName(string);
string getLastName();
void setMonthlypay(int);
int getMonthlypay();
private:
string firstname;
string lastname;
int Monthlypay;
};




#endif // EMPLOYEE_H_INCLUDED
