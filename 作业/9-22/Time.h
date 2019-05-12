#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
class Time
{
public:
   Time( int = 0, int = 0, int = 0 );
   bool setTime( int, int, int );
   bool setHour( int );
   bool setMinute( int );
   bool setSecond( int );
   int getHour();
   int getMinute();
   int getSecond();
   void printUniversal();
   void printStandard(); e
private:
   unsigned int hour;
   unsigned int minute;
unsigned int second;
};


#endif // TIME_H_INCLUDED
