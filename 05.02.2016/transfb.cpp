#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long b,n,i,x,s=0;
    cin>>b>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s=s+x*pow(b,n-i);
    }
    cout<<s;
    return 0;
}
