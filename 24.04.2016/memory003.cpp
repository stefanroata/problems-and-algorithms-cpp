#include <fstream>

using namespace std;

ifstream f("memory003.in");
ofstream g("memory003.out");

short mat[1001][101];
int di[40],frecv[40];

void descompunere(int x,int poz)
{
    int d=2,e=0;
    while(x%d==0)
    {
        x/=2;
        e++;
    }
        mat[poz][d]+=e;
    d=3;
    while(x!=1)
    {
        e=0;
        if(d*d>x)
            d=x;
        while(x%d==0)
        {
            x/=d;
            e++;
        }
        mat[poz][d]+=e;
        d+=2;
    }
}

int main()
{
    int n,m,p,i,j,x,d,e,nrf,ok,nrc=0;
    f>>n>>m>>p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            f>>x;
            descompunere(x,j);
        }
    }
    d=2;
    e=0;
    i=1;
    while(p%d==0)
    {
        p/=d;
        e++;
    }
    if(e)
    {
        di[i]=d;
        frecv[i]=e;
        i++;
    }
    d=3;
    while(p!=1)
    {
        e=0;
        if(d*d>p)
            d=p;
        while(p%d==0)
        {
            p/=d;
            e++;
        }
        if(e)
        {
            di[i]=d;
            frecv[i]=e;
            i++;
        }
        d+=2;
    }
    i--;
    nrf=i;
    for(i=1;i<=nrf;i++)
    {
        if(di[i]>100)
        {
            g<<0;
            return 0;
        }
    }
    for(i=1;i<=m;i++)
    {
        ok=1;
        for(j=1;j<=nrf&&ok;j++)
        {
            if(mat[i][di[j]]<frecv[j])
                ok=0;
        }
        if(ok)
            nrc++;
    }
    g<<nrc;
    return 0;
}
