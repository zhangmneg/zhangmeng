#include <iostream>

using namespace std;

int main()
{   cout<<"���������֣������򽫼������ǵ�ƽ��ֵ,��������9999ʱ������ǰ������ƽ��ֵ"<<endl;
    unsigned int i=0;
    unsigned int z=0;
    unsigned int average=0;
    for(unsigned int x=0;x!=9999;++i)

    {

        cin >>x;
        z+=x;
    }
    average=(z-9999)/(i-1);
    cout<<"\n��Щ����ƽ��ֵΪ�� "<<average<<endl;
    return 0;

}
