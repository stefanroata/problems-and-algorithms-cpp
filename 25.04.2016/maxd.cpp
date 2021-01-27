#include <fstream>

using namespace std;



long long nrdivizori(long long x)//returneaza nr de divizori
{
    long long p=1,d,e=0;
    d=2;
    while(x%d==0)
    {
        x/=d;
        e++;
    }
    p*=(e+1);
    d=3;
    while(x!=1)
    {
        if(d*d>x)
            d=x;
        e=0;
        while(x%d==0)
        {
            x/=d;
            e++;
        }
        p*=(e+1);
        d+=2;
    }
    return p;
}


ifstream f("maxd.in");
ofstream g("maxd.out");

int main()
{
    long long a,b,i,nrdivmax=-1,contor=0,nrmin=1000000001;
    long long nrdiv;
    f>>a>>b;
    for(i=a;i<=b;++i)
    {
        nrdiv=nrdivizori(i);
        if(nrdiv>nrdivmax)
        {
            nrdivmax=nrdiv;
            contor=1;
            nrmin=i;
        }
        else
            if(nrdiv==nrdivmax)
            contor++;
    }
    g<<nrmin<<" "<<nrdivmax<<" "<<contor;
    return 0;
}
