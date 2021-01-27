#include <fstream>

using namespace std;

ifstream f("porumb.in");
ofstream g("porumb.out");

int main()
{
    int n,x,i,p,t,r,d,k;
    bool ok=0;
    f>>n>>x;
    //cerinta 1
    if(n%2==0)
        g<<n/2<<'\n';
    else
        g<<n/2+1<<'\n';
    //cerinta 2
    i=0;
    p=1;
    while(p<=n)
    {
        p*=2;
        i++;
    }
    g<<i<<'\n';
    t=i-1;
    //cerinta 3
    r=1;
    d=2;
    k=1;
    while(!ok)
    {
        if(x%d==r)
            ok=1;
        else
        {
            r=d;
            d*=2;
            k++;
        }

    }
    g<<k<<'\n';
    //cerinta 4
    p=1;
    for(i=1;i<=t;i++)
        p*=2;
    g<<p;
    return 0;
}
