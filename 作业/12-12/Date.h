#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class Date
{
   friend ostream &operator<<( ostream &, const Date & );
public:
   Date( int m = 1, int d = 1, int y = 1900 );
   void setDate( int, int, int );
   Date &operator++();
   Date operator++( int );
   const Date &operator+=( int );
   bool leapYear( int ) const;
   bool endOfMonth( int ) const;
   int getMonth() const;
private:
   int month;
   int day;
   int year;

   static const int days[];
   void helpIncrement();
};


#endif // DATE_H_INCLUDED
