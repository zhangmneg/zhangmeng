#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int y;
    int z=1;
    double e=1.0;
    cout<<"������e��Ҫ�þ���: "<<endl;
    cin>>y;
    while(x<y)
    {
        z*=x;
        e+=1.0/z;
        x++;
    }
    cout << "e��: " << endl;
    return 0;
}
