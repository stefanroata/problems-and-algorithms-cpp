#include <iostream>
#include <algorithm>

using namespace std;

long long v[2501],d[2501];

int main()
{
    long long n,i,c;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    for(i=1;i<=n-1;i++)
    {
        d[i]=v[i]-v[i+1];
        if(d[i]<0)
            d[i]=-d[i];
        if(d[i]==1||d[i]==0)
        {
            cout<<"NU";
            return 0;
        }
    }
    c=__gcd(d[1],d[2]);
    for(i=3;i<=n-1;i++)
    {
        if(c==1)
        {
            cout<<"NU";
            break;
        }
        else
            c=__gcd(c,d[i]);
    }
    if(c==1)
    {
        cout<<"NU";
        return 0;
    }
    cout<<"DA";
    return 0;
}
