#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long long n,d=2,p,x,i,nr,nn,nrmax=-1,xc;
    cin>>x;
    for(i=1;i<=x;i++)
    {
    cin>>n;
    nn=n;
    d=2;
    nr=0;
    while(n!=1)
    {
        p=0;
        if(d*d>n)
            d=n;
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        if(p)
        nr++;
        d++;
    }
    if(nr>nrmax)
    {
        nrmax=nr;
        xc=nn;
    }
    else
        if(nr==nrmax)
    {
        if(nn<xc)
        {
            xc=nn;
        }
    }
    }
    cout<<xc;
    return 0;
}
