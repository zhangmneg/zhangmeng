#include <iostream>
using namespace std;

double smallest( double, double, double );

int main()
{
   double x;
   double y;
   double z;

   cout << "������������: ";
   cin >> x >> y >> z;


   cout << "��С������: " << smallest( x, y, z ) << endl;
}
double smallest( double a, double b, double c )
{
   if ( a < b && a < c )
      return a;
   else if ( b < a && b < c )
      return b;
   else
      return c;
}
