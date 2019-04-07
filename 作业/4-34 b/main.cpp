#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int y;
    int z=1;
    double e=1.0;
    cout<<"请输入e需要得精度: "<<endl;
    cin>>y;
    while(x<y)
    {
        z*=x;
        e+=1.0/z;
        x++;
    }
    cout << "e是: " << endl;
    return 0;
}
