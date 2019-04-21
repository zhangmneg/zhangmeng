#include <iostream>
#include <iomanip>
using namespace std;

int invertedSequence( int );

int main()
{
   int x;

   cout << "请输入一个数: ";
   cin >> x;

   cout << "数字逆序反向之后为: ";
   cout << invertedSequence( x ) << endl;
}
int invertedSequence( int n )
{
   int reverse = 0;

   while ( n > 0 )
   {
      reverse *= 10;
      reverse += n % 10;
      n /= 10;
   }
   return reverse;
}
