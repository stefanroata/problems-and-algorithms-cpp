#include <iostream>
#include <cmath>

using namespace std;

int v[10001];

int main()
{
    int n,i,difmin=1000000001,d,a,b;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n-1;i++)
    {
        d=abs(v[i]-v[i+1]);
        if(d<difmin)
        {
            difmin=d;
            a=v[i];
            b=v[i+1];
        }
        else
            if(d==difmin)
        {
            if(v[i]+v[i+1]<a+b)
            {
                difmin=d;
                a=v[i];
                b=v[i+1];
            }
        }
    }
    cout<<a<<" "<<b;
    return 0;
}
