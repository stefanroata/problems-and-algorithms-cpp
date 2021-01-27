#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("speciale.in");
ofstream g("speciale.out");

long long v1[]={0,1,12,123,1234,12345,123456,1234567,12345678,123456789},v2[]={0,9,98,987,9876,98765,987654,9876543,98765432,987654321};
int v[20],w[20];

int main()
{
    long long k,n,a,b,poz,aux1,aux2;
    bool ok1,corect1,ok2,corect2;
    int nra=0,nrb=0,nr=0,p,i,cif,j,t;
    f>>p;
    f>>k>>n>>a>>b;
    if(p==1)
        g<<max(v1[k],v2[k]);
    if(p==2)
    {
        i=1;
        do
        {
           cif=n%10;
           n/=10;
           v[i]=w[i]=cif;
           i++;
        }while(n);
        i--;
        n=i;
        t=i;
        reverse(v+1,v+n+1);
        reverse(w+1,w+n+1);
        poz=-1;
        ok1=0;
        for(i=2;i<=n&&ok1==0;i++)
        {
            if(v[i]!=v[i-1]+1)
                {
                    poz=i;
                    ok1=1;
                }
        }
        if(v[1]!=1)
        {
            ok1=1;
            corect1=0;
        }
        else
        if(ok1==1)
        {
            for(i=poz;i<=n;i++)
                v[i]=v[i+1];
            n--;
            corect1=1;
            for(i=2;i<=n&&corect1;i++)
            {
                if(v[i]!=v[i-1]+1)
                    corect1=0;
            }
        }


        poz=-1;
        ok2=0;
        for(i=2;i<=t&&ok2==0;i++)
        {
            if(w[i]!=w[i-1]-1)
            {
                poz=i;
                ok2=1;
            }
        }
        if(w[1]!=9)
        {
            ok2=1;
            corect2=0;
        }
        else
        if(ok2==1)
        {
            for(i=poz;i<=t;i++)
                w[i]=w[i+1];
            t--;
            corect2=1;
            for(i=2;i<=t&&corect2;i++)
            {
                if(w[i]!=w[i-1]-1)
                    corect2=0;
            }
        }

        if(ok1==0)
        {
            n--;
            for(i=1;i<=n;i++)
                g<<v[i];
        }
        else
            if(ok1==1&&ok2==1)
        {
            if(corect1==0&&corect2==0)
                g<<0;
            else
                if(corect1)
            {
                for(i=1;i<=n;i++)
                    g<<v[i];
            }
            else
                if(corect2)
            {
                for(i=1;i<=t;i++)
                    g<<w[i];
            }
        }
        else
        if(ok1==1&&ok2==0)
        {
            t--;
            for(i=1;i<=t;i++)
                g<<w[i];
        }
    }
    if(p==3)
    {
        aux1=a;
        aux2=b;
        do
            aux1/=10,nra++;
        while(aux1);

        do
            aux2/=10,nrb++;
        while(aux2);
        for(i=nra;i<=nrb;i++)
        {
            if(v1[i]>=a&&v1[i]<=b)
                nr++;
            if(v2[i]>=a&&v2[i]<=b)
                nr++;
        }
        g<<nr;
    }
    return 0;
}
