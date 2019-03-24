#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <string >
using std::string;
class Date
{
public:
    Date(int,int,int);
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void setYear(int);
    int getYear();
    void displayDate();
private:
    int Month;
    int Day;
    int Year;



};

#endif // DATE_H_INCLUDED
