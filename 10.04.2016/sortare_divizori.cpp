#include <fstream>

using namespace std;

ifstream f("sortare_divizori.in");
ofstream g("sortare_divizori.out");

int v[1001],a[1001];

int nrd(int x)
{
    int d,f,p=1;
    f=0;
    while(x%2==0)
        {
            f++;
            x/=2;
        }
    p*=(f+1);
    d=3;
    while(x!=1)
    {
        f=0;
        if(d*d>x)
            d=x;
        while(x%d==0)
        {
            x/=d;
            f++;
        }
        p*=(f+1);
        d+=2;
    }
    return p;
}

int main()
{
    int n,i,ok;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        a[i]=nrd(v[i]);
    }
    do
    {
        ok=0;
        for(i=1;i<=n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                swap(a[i],a[i+1]);
                swap(v[i],v[i+1]);
                ok=1;
            }
            else
                if(a[i]==a[i+1])
            {
                if(v[i]>v[i+1])
                {
                    swap(v[i],v[i+1]);
                    ok=1;
                }
            }
        }
    }while(ok);
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
