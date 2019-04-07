#include <iostream>

using namespace std;

int main()
{
    int count;
    bool breakout=false;
    for(count=1;(count<=10)&&(!breakout);count++)
    {
        if(count==5)
            breakout=true;
        else
            cout<<count<<"";
    }
    cout << "\nbroke out of loop because loop-continuation tewt" <<"(!braakout)failed."<< endl;
    return 0;
}
