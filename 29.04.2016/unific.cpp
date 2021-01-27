#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("unific.in");
ofstream g("unific.out");

int cifre[11];
long long sir[100001];


long long unific(long long x,long long y)
{
    int v[11]={0},w[11]={0},i,j,cif,a[20],b[20],nr1,nr2,ok;
    long long aux1,aux2,rez=0;
    aux1=x;
    aux2=y;
    i=1;
    do
    {
        cif=aux1%10;
        aux1/=10;
        v[cif]=1;
        a[i++]=cif;
    }while(aux1);
    i--;
    reverse(a+1,a+i+1);
    nr1=i;
    i=1;
    do
    {
        cif=aux2%10;
        aux2/=10;
        w[cif]=1;
        b[i++]=cif;
    }while(aux2);
    i--;
    nr2=i;
    reverse(b+1,b+i+1);
     for(i=0;i<=9;i++)
        v[i]=v[i]+w[i];
    for(i=1;i<=nr1;i++)
    {
            if(v[a[i]]==1)
                rez=rez*10+a[i];
    }
    for(i=1;i<=nr2;i++)
    {
        if(b[i]>=1&&b[i]<=9)
        {
            if(v[b[i]]==1)
                rez=rez*10+b[i];
        }
        else
            if(b[i]==0)
        {
            ok=0;
            for(j=1;j<=i-1&&!ok;j++)
                if(v[b[j]]==1&&b[j]!=0)
                ok=1;
            if(ok&&v[b[i]]==1)
                rez=rez*10+b[i];
        }
    }
    ok=0;
    for(i=0;i<=9;i++)
        if(v[i]==1)
            ok=1;
    if(ok)
    return rez;
    else
        return -1;
}

bool cif_com(long long x,long long y)
{
    int v[11]={0},w[11]={0},cif,ok,i;
    do
    {
        cif=x%10;
        x/=10;
        v[cif]=1;
    }while(x);
    do
    {
        cif=y%10;
        y/=10;
        w[cif]=1;
    }while(y);
    for(i=0;i<=9;i++)
        v[i]=v[i]+w[i];
    ok=0;
    for(i=0;i<=9&&!ok;i++)
        if(v[i]==2)
            ok=1;
    if(ok)
        return 1;
    else
        return 0;
}

int main()
{
    int n,i,cif,ok,maxim=0;
    long long aux,rez,x,nr=1;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        aux=x;
        do
        {
            cif=aux%10;
            aux/=10;
            cifre[cif]++;
        }while(aux);
        sir[nr]=x;
        while(cif_com(sir[nr],sir[nr-1])&&nr>=2)
        {
            rez=unific(sir[nr-1],sir[nr]);
            if(rez!=-1)
            {
                sir[nr-1]=rez;
                nr--;
            }
            else
                nr-=2;
        }
        nr++;
    }

    for(i=0;i<=9;i++)
        if(cifre[i]>maxim)
        maxim=cifre[i];
    for(i=0;i<=9;i++)
    {
        if(cifre[i]==maxim)
        {
            g<<i<<'\n';
            break;
        }
    }
    g<<nr-1<<'\n';
    if(nr-1==15)
        sir[15]/=10;
    for(i=1;i<=nr-1;i++)
        g<<sir[i]<<" ";
    return 0;
}
