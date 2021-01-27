#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("sir5.in");
ofstream g("sir5.out");

int v[20];

int main()
{
    long long k,a,b,i,j,s=0,x,cif,n;
    f>>k>>x>>a>>b;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=i;j++)
            s=(s+j)%10;
        s=s%10;
    }
    g<<s%10<<'\n';
    i=1;
    do
    {
        cif=x%10;
        x/=10;
        v[i++]=cif;
    }while(x);
    i--;
    n=i;
    reverse(v+1,v+n+1);
    if(v[1]==n)
    {
        for(i=1;i<=n+1;i++)
            g<<i;
    }
    else
    {
        for(i=2;i<=n;i++)
            g<<v[i];
        g<<v[1];
    }
    g<<'\n';
    if(a<b)
        g<<b-a;
    else
        g<<0;
    return 0;
}
