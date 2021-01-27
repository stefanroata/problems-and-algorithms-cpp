#include <iostream>

using namespace std;


bool prim(long long x)
{
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(long long i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    int n,i,ok=-1;
    cin>>n;
    if(prim(n))
        ok=2;
    else
    {
    if(n%2==0&&prim(n/2))
        ok=1;
    else
    {
        ok=0;
        for(i=3;i*i<n;i+=2)
            if(n%i==0&&prim(i)&&prim(n/i))
            {ok=1;break;}
        if(i*i==n&&prim(i))
            ok=3;
    }
    }
    if(ok==0)
        cout<<"compus";
    if(ok==1)
        cout<<"aproape prim";
    if(ok==2)
        cout<<"prim";
    if(ok==3)
        cout<<"patrat prim";
    return 0;
}
