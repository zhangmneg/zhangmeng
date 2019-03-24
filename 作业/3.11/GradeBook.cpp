#include <iostream>
#include "GradeBook.h"
using namespace std;
GradeBook::GradeBook(string name1,string name2)

   :TeacherName(name2),CourseName(name1)
{

}
void setTeacherName(string name2)
{

}
string GradeBook::getTeacherName()const
{
    return TeacherName;
}
void GradeBook::displayMessage()const
{
    cout<<"welcome to"<<GradeBook::CourseName<<"\nThis course is presented by"<<GradeBook::TeacherName<<endl;
}
