#include <iostream>

using namespace std;

int main()
{
    int x =0;
    int result1 =0;
    int result2 =0;
    int result3 =0;
    cout << "Enter one integer: ";
    cin >>x;
    result1 =3.14159*x*2;
    result2 =3.14159*x*x;
    result3 =2*x;
    cout << "The product is " <<"\n圆的周长" <<result1<<"\n圆的面积"<<result2<<"\n圆的直径"<<result3<<endl;
    return 0;
}//end function main
