#include <iostream>
#include <iomanip>
using namespace std;
int celsius( int fTemp )
{
   return static_cast< int > ( 5.0 / 9.0 * ( fTemp - 32 ) );
}
int fahrenheit( int cTemp )
{
   return static_cast< int > ( 9.0 / 5.0 * cTemp + 32 );
}
int celsius( int );
int fahrenheit( int );

int main()
{
   cout << "摄氏温度对应华氏温度:" << endl;
   for ( int t = 0; t < 4; t++ )
      cout << setw( 5) << "摄氏温度" << setw( 11) << "华氏温度 ";
cout << endl;
   for ( int i = 0; i < 25; i++ )
   {
      for ( int j = 0; j <= 75; j += 25 )
         cout << setw( 7 ) << i+j<< setw( 11 ) <<fahrenheit( i+j );
         cout << endl;
   }
cout << setw( 61 ) << 100 << setw( 11 ) << fahrenheit( 100 ) << endl;
cout << "\n华氏温度对应摄氏温度:" << endl;

   for ( int t = 0; t < 4; t++ )
      cout << setw( 5 ) << "华氏温度" << setw( 11 ) << "摄氏温度 ";
      cout << endl;


   for ( int i = 32; i < 77; i++ )
   {
      for ( int j = 0; j <= 135; j += 45 )
         cout << setw( 10 ) << i + j
            << setw( 8 ) << celsius( i + j );

      cout << endl;
   }


   cout << setw( 64 ) << 212 << setw( 8 ) << celsius( 212 ) << endl;
}
