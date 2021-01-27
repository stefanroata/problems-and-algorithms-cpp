#include <iostream>

using namespace std;

bool prim(long long x)
{
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    long long n,i,nn;
    cin>>n;
    nn=n;
    for(i=1;i*i<=n&&nn!=1;i++)
    {
        if(n%i==0&&prim(i))
        {
            while(nn%i==0)
            {
                cout<<i<<" ";
                nn/=i;
            }
        }
    }
    return 0;
}
