#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("palindrom2.in");
ofstream g("palindrom2.out");

int v[15];

bool verif_p(long long x)
{
    long long i=1,cif,n;
    do
    {
        cif=x%10;
        x/=10;
        v[i]=cif;
        i++;
    }while(x);
    i--;
    reverse(v+1,v+i+1);
    n=i;
    for(i=1;i<=n/2;i++)
    {
        if(v[i]!=v[n-i+1])
            return 0;
    }
    return 1;
}

bool verif_ap(long long x)
{
    long long i=1,cif,n,nr=0;
    do
    {
        cif=x%10;
        x/=10;
        v[i]=cif;
        i++;
    }while(x);
    i--;
    reverse(v+1,v+i+1);
    n=i;
    for(i=1;i<=n/2;i++)
    {
        if(v[i]!=v[n-i+1])
            nr++;
        if(nr>1)
            break;
    }
    if(nr==1)
        return 1;
    else
        return 0;
}

long long nrc(long long x)
{
    long long cont=0;
    do
    {
        x=x/10;
        cont++;
    }while(x);
    return cont;
}

int main()
{
    long long n,c,i,nr=0,t,r,aux,j,aux1,cif,auxx,w,copie,x,val;
    f>>c;
    if(c==1)
    {
        f>>n;
        for(i=1;i<=n;i++)
        {
            f>>x;
            if(verif_p(x))
                nr++;
        }
        g<<nr;
    }
    if(c==2)
    {
        f>>n;
        for(i=1;i<=n;i++)
        {
            f>>x;
            if(verif_ap(x))
                nr++;
        }
        g<<nr;
    }
    if(c==3)
    {
        f>>n;
        for(i=1;i<=n;i++)
        {
            f>>x;
            val=1;
            t=nrc(x);
            for(j=1;j<=t;j++)
                val*=10;
            if(x==val-1)
                g<<x+2<<" ";
            else
            {
            if(t%2==0)
            {
                r=t/2;
                aux=x;
                for(j=1;j<=r;j++)
                    aux/=10;
                aux1=aux;
                auxx=aux;
                while(aux1)
                {
                    cif=aux1%10;
                    aux=aux*10+cif;
                    aux1/=10;
                }
                if(aux>x)
                    g<<aux<<" ";
                else
                {
                    auxx++;
                    copie=auxx;
                        while(copie)
                        {
                            cif=copie%10;
                            copie/=10;
                            auxx=auxx*10+cif;
                        }
                        g<<auxx<<" ";
                }
            }
            else
            {
                r=t/2;
                aux=x;
                for(j=1;j<=r;j++)
                    aux/=10;
                aux1=aux/10;
                auxx=aux;
                while(aux1)
                {
                    cif=aux1%10;
                    aux1/=10;
                    aux=aux*10+cif;
                }
                if(aux>x)
                    g<<aux<<" ";
                else
                {
                    auxx++;
                        copie=auxx/10;
                        while(copie)
                        {
                            cif=copie%10;
                            copie/=10;
                            auxx=auxx*10+cif;
                        }
                        g<<auxx<<" ";
                }
            }
            }
            }
    }
    return 0;
}
