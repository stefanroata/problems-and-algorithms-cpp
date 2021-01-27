#include <fstream>

using namespace std;

ifstream f("divk.in");
ofstream g("divk.out");

bool nrdiv(long long x,long long k)
{
    long long i,nr=0;
    for(i=1;i*i<x;i++)
    {
        if(x%i==0)
            nr+=2;
        if(nr>=k)
            return 1;
    }
    if(i*i==x)
        nr++;
    if(nr>=k)
        return 1;
    return 0;
}

int main()
{
    long long n,k,i,x;
    f>>n>>k;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(nrdiv(x,k))
            g<<x<<" ";
    }
    return 0;
}
