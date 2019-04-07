#include <iostream>

using namespace std;

int main()
{
    int x;
    int y=1;
    cout<<"enter a positive linteger";
    cin>>x;
    cout<<x<<"! is";
    while(x>0)
    {
        y*=x;
        x--;
    }
    cout << y<< endl;
    return 0;
}
