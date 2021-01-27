#include <iostream>

using namespace std;

int main()
{
    int n,d1=2,d2=5,s1=0,s2=0;
    cin>>n;
    while(d1<=n)
    {
        s1+=n/d1;
        d1*=2;
    }
    while(d2<=n)
    {
        s2+=n/d2;
        d2*=5;
    }
    cout<<min(s1,s2);
    return 0;
}
