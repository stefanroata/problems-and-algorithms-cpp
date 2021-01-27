#include <fstream>

using namespace std;

ifstream f("alice.in");
ofstream g("alice.out");

int complementare(int x)
{
    int cmax=-1,cif,nrc=0,aux,i,nr=0;
    aux=x;
    do
    {
        cif=x%10;
        x/=10;
        nrc++;
        if(cif>cmax)
            cmax=cif;
    }while(x);
    for(i=1;i<=nrc;i++)
        nr=nr*10+cmax;
    return nr-aux;
}

int main()
{
    int k,n,i,x,maxp=-1,a,b,c,nr=0;
    f>>n>>k;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x%2==0)
        {
            if(x>maxp)
                maxp=x;
        }
        a=x;
        b=x;
        c=complementare(x);
        do
        {
            if(c<10)
                break;
            a=b;
            b=c;
            c=complementare(c);
            if(c==b||c==a)
            {
                c=-1;
                break;
            }
        }while(c>9);
        if(c==k)
            nr++;
    }
    g<<maxp<<'\n'<<nr;
    return 0;
}
