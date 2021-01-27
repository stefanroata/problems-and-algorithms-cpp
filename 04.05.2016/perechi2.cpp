#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("perechi2.in");
ofstream g("perechi2.out");

int v[2001],poz[2001];

int main()
{
    int p,n,i,ok,maxim,d,l,l1,l2,nr,t1,t2;
    f>>p;
    if(p==2)
    {
        f>>n;
        for(i=1;i<=n;i++)
            f>>v[i],poz[i]=i;
        do
        {
            ok=0;
            for(i=1;i<=n-1;i++)
            {
                if(v[i]>v[i+1])
                {
                    swap(v[i],v[i+1]);
                    swap(poz[i],poz[i+1]);
                    ok=1;
                }
            }
        }while(ok);
        maxim=v[n];
        for(i=1;i<=n-2;i+=2)
        {
            d=maxim-v[i];
            v[i]+=d;
            v[i+1]+=d;
            maxim=v[i+1];
            g<<poz[i]<<" "<<poz[i+1]<<" "<<d<<'\n';
        }
        maxim=v[n-1];
        if(maxim!=v[1])
        {
        for(i=2;i<=n-3;i++)
        {
            if(v[i]==v[i+1])
            {
                d=maxim-v[i];
                v[i]+=d;
                v[i+1]+=d;
                g<<poz[i]<<" "<<poz[i+1]<<" "<<d<<'\n';
            }
        }
        d=maxim-v[1];
        v[1]+=d;
        v[n]+=d;
        g<<poz[1]<<" "<<poz[n]<<" "<<d;
        }
    }
    else
    {
        f>>n;
        for(i=1;i<=n;i++)
            f>>v[i],poz[i]=i;


         do
        {
            ok=0;
            for(i=1;i<=n-1;i++)
            {
                if(v[i]>v[i+1])
                {
                    swap(v[i],v[i+1]);
                    swap(poz[i],poz[i+1]);
                    ok=1;
                }
            }
        }while(ok);


        v[n+1]=-1;
        nr=0;
        l=1;
        for(i=1;i<=n;i++)
        {
            if(v[i]==v[i+1])
                l++;
            else
            {
                nr++;
                if(nr>2)
                {
                    g<<0;
                    return 0;
                }
                if(nr==1)
                {
                    l1=l;
                    t1=i;
                }
                if(nr==2)
                {
                    l2=l;
                    t2=i;
                }
                l=1;
            }
        }
        if(nr<2)
            g<<0;
        else
        {
            if(l2==n-2&&l1==2)
                g<<poz[t1-1]<<" "<<poz[t1]<<" "<<v[t2]-v[t1];
            else
                g<<0;
        }
    }
    return 0;
}
