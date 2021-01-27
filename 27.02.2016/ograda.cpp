#include <fstream>

using namespace std;

ifstream f("ograda.in");
ofstream g("ograda.out");

long long nrdivi(long long x)
{
    long long i,nr=0;
    for(i=1;i*i<x;i++)
    {
        if(x%i==0)
        {
            if(i%2==1)
                nr++;
            if((x/i)%2==1)
                nr++;
        }
    }
    if(i*i==x)
    {
        if(i%2==1)
            nr++;
    }
    return nr;
}

long long nrdivp(long long x)
{
    long long i,nr=0;
    for(i=1;i*i<x;i++)
    {
        if(x%i==0)
        {
            if(i%2==0)
                nr++;
            if((x/i)%2==0)
                nr++;
        }
    }
    if(i*i==x)
    {
        if(i%2==0)
            nr++;
    }
    return nr;
}

int main()
{
    long long c,p,nr2,nr1,t;
    f>>t;
    if(t==1)
    {
        f>>c>>p;
        p/=2;
        nr2=p-c;
        nr1=c-nr2;
        g<<nr1<<" "<<nr2;
    }
    else
    {
        f>>c>>p;
        g<<nrdivi(c)<<" "<<nrdivp(p);
    }
    return 0;
}
