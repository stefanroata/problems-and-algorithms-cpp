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

bool aproape_prim(long long x)
{
    if(x%2==0&&prim(x/2))
        return true;
    for(long long i=3;i*i<x;i+=2)
        if(x%i==0&&prim(i)&&prim(x/i))
        return true;
    return false;
}

int main()
{
    int n,i,x,apar=0,maxim=-1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(aproape_prim(x)==true)
            {
                if(x>maxim)
                {
                    maxim=x;
                    apar=1;
                }
                else
                    if(x==maxim)
                    apar++;
            }
    }
    cout<<maxim<<" "<<apar;
    return 0;
}
