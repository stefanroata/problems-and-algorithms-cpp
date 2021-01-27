#include <fstream>

using namespace std;

ifstream f("imprimanta.in");
ofstream g("imprimanta.out");

int v[]={12,5,11,11,9,11,12,7,13,12};

int main()
{
    long long n;
    int k,i,c,cif,minim=1000000,cifmax,r;
    f>>n>>k;
    do
    {
        cif=n%10;
        if(v[cif]<minim)
            minim=v[cif],cifmax=cif;
        else
            if(v[cif]==minim)
        {
            if(cif>cifmax)
                cifmax=cif;
        }
        n/=10;
    }while(n);
    g<<cifmax<<'\n';
    r=k%5;
    c=k/5;
    if(r==0)
    {
        for(i=1;i<=c;i++)
            g<<1;
    }
    if(r==1)
    {
        if(k==16)
        g<<74;
        else
        {
            g<<777;
            for(i=1;i<=c-4;i++)
                g<<1;
        }

    }
    if(r==2)
    {
        g<<7;
        for(i=1;i<=c-1;i++)
            g<<1;
    }
    if(r==3)
    {
        g<<8;
        for(i=1;i<=c-2;i++)
            g<<1;
    }
    if(r==4)
    {
        g<<77;
        for(i=1;i<=c-2;i++)
            g<<1;
    }
    return 0;
}
