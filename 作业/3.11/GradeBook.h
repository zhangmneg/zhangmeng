#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
#include <string>
class GradeBook
{
    public:
        explicit GradeBook(std::string,std::string);
        void setCourseName(std::string),setTeachereName(std::string);
        std::string getCourseName,getTeacherName()const;
        void displayMessage()const;
    private:
        std::string CourseName,TeacherName;


};


#endif // GRADEBOOK_H_INCLUDED
