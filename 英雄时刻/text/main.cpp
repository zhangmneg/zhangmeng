#include <iostream>

using namespace std;
int main()
{
    int x =0;
    int y=0;
    int result1 =0;
    int result2 =0;
    int result3 =0;
    int result4 =0;
    cout << "Enter two integers; ";
    cin >> x>> y;
    result1 =x+y;
    result2 =x*y;
    result3 =x/y;
    result4 =x-y;
    cout << "The product is "<<"\n两个数的和" <<result1<<"\n两个数的乘积"<<result2<<" \n两个数的商"<<result3<<"\n两个数的差" <<result4<<std::endl;
}


