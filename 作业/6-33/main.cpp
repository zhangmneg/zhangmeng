#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main()
{
   int headsCount = 0;
   int tailsCount = 0;

   srand( time( 0 ) );


   for ( int loop = 1; loop <= 100; loop++ )
   {
      if ( flip() == 0 )
      {
         ++tailsCount;
         cout << "Tails ";
      }
      else
      {
         ++headsCount;
         cout << "Heads ";
      }

      if ( loop % 10 == 0 )
         cout << endl;
   }


   cout << "\n��������Ϊ��" << headsCount
      << "\n��������Ϊ�� " << tailsCount << endl;
}

int flip()
{
   return rand() % 2;
}
