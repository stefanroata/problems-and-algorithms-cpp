#include <iostream>

using namespace std;

int main()
{
    long long n,m,i;
    cin>>n;
    m=n;
    for(i=2;i*i<=n;i++)
    {
        while(m%i==0)
        {
            cout<<i<<" ";
            m/=i;
        }
        if(m==1)
            break;
    }
    if(n<4)
        cout<<n;
    return 0;
}
