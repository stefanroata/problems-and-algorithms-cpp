#include <iostream>

using namespace std;

int main()
{
    int x,s=0;
    cin>>x;
    if(x>9)
    {
        while(x>99)
            x/=10;
        s=x;
    }
    while(x)
    {
        cin>>x;
        if(x>9)
        {
            while(x>99)
                x/=10;
            s+=x;
        }
    }
    cout<<s;
    return 0;
}
