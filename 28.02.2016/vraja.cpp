#include <iostream>
#include <cmath>

using namespace std;

int v[1001];

int main()
{
    int n,i,d,h,s=0;
    cin>>n>>h;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        d=v[i]-v[i+1];
        d=abs(d);
        v[i]=v[i+1];
        s+=d;
    }
    cout<<s/h+1;
    return 0;
}
