#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int y;
    int z=1;
    int w;
    double e=1.0;
    double exponent=1.0;
    cout<<"enter expoment:"<<endl;
    cin>>w;
    cout<<"enter desired accuracy of e:";
    cin>>y;
   while(x<y)
    {
        exponent*=w;
        z*=x;
        e+=exponent/z;
        x++;
    }
    cout << "e to the: " << w<<" is "<<e<<endl;
    return 0;
}



