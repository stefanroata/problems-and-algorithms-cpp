#include <cstdio>
#include <algorithm>

using namespace std;

FILE*f=freopen("ech.in","r",stdin);
FILE*g=freopen("ech.out","w",stdout);


int n,v[31],w[31];

void citire()
{
    char c;
    int k=0,cif;
    while(scanf("%c",&c)&&c!='\n')
    {
        cif=(int)(c-'0');
        if(cif<10)
        v[++k]=cif;
    }
    n=k;
}

int rest(int p)
{
    int r=0,i=n;
    while(i>=1)
    {
        r=r*10+v[i];
        r=r%p;
        i--;
    }
    return r;
}

void adunare(int x)
{
    int t,k=0,aux,i;
    aux=x;
    do
    {
        w[++k]=aux%10;
        aux/=10;
    }while(aux);
    t=0;
    for(i=1;i<=n||t;i++)
    {
        v[i]=v[i]+w[i]+t;
        t=v[i]/10;
        v[i]%=10;
    }
    i--;
    n=i;
    for(i=1;i<=k;i++)
        w[i]=0;
}


bool echilibrat()
{
    int si=0,sp=0,i;
    for(i=1;i<=n;i++)
    {
        if(i%2)
            si+=v[i];
        else
            sp+=v[i];
    }
    return (si==sp);
}

void afisare()
{
    int i;
    for(i=n;i>=1;i--)
        printf("%d",v[i]);
}


int main()
{
    int r;
    citire();
    reverse(v+1,v+n+1);
    r=rest(11);
    if(r!=0)
        adunare(11-r);
    else
        adunare(11);
    while(!echilibrat())
        adunare(11);
    afisare();
    return 0;
}
