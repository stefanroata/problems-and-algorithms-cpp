#include <iostream>

using namespace std;

bool prim(int x)
{
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int nrdiv(int x)
{
    int i,nr=0;
    for(i=1;i*i<x;i++)
        if(x%i==0) nr+=2;
    if(i*i==x)
        nr++;
    return nr;
}

int main()
{
    int n,i,x;
    long long c=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(!prim(x))
        {
            if(nrdiv(x)%2==1)
                c+=3*x;
            else
                c+=x;
        }
    }
    cout<<c;
    return 0;
}
