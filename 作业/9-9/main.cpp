#include <iostream>
#include "DateAndTime.h" // include definitions of class DateAndTime
using namespace std;

int main()
{
   const int MAXTICKS = 30;
   DateAndTime d( 12, 31, 2004, 23, 59, 57 ); d


   for ( int ticks = 1; ticks <= MAXTICKS; ticks++ )
   {
      cout << "Universal time: ";
      d.printUniversal();
      cout << "Standard  time: ";
      d.printStandard();
      d.tick();
   }

   cout << endl;
}
