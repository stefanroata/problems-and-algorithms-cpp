#include <iostream>
#include <cstdio>

using namespace std;

FILE*f=freopen("subsecvmax.in","r",stdin);
FILE*g=freopen("subsecvmax.out","w",stdout);

int v[100001];

int main()
{
    int n,i,lmax=0,l=1,poz=0;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>v[i];
    for(i=1;i<=n-1;i++)
    {
        if(v[i]<=v[i+1])
            l++;
        else
        {
            if(l>lmax)
            {
                lmax=l;
                poz=i-lmax+1;
            }
            l=1;
        }
    }
    if(l>lmax)
    {
        lmax=l;
        poz=i-lmax+1;
    }
    cout<<poz<<' '<<lmax;
    return 0;
}
