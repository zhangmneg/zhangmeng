#include <iostream>
using namespace std;
bool isEven( int );
int main()
{
   int x;
   for ( int i = 1; i <= 3; i++ )
   {
      cout << "Enter an integer: ";
      cin >> x;
   if ( isEven( x ) )
         cout << " true\n";
      else
         cout << " false\n";
   }

   cout << endl;
}
bool isEven( int a )
{
   return !( a % 2 );
}
