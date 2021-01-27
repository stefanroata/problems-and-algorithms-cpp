#include <fstream>

using namespace std;



int nrdivizori(long long x)//returneaza nr de divizori
{
    long long i;
    int nrd=0;
    for(i=1;i*i<x;i++)
        if(x%i==0)
        nrd+=2;
    if(i*i==x) ++nrd;
    return nrd;

}


ifstream f("maxd.in");
ofstream g("maxd.out");

int main()
{
    long long a,b,i,nrdivmax=-1,contor=0,nrmin=1000000001;
    int nrdiv;
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
