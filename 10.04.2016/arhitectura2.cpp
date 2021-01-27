#include <fstream>

using namespace std;

ifstream f("arhitectura2.in");
ofstream g("arhitectura2.out");

int v[100002],a[2000002];

int main()
{
    int n,x,j=1,t,i;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[x]++;
    }
    for(i=100000;i>=1;i--)
    {
        if(v[i])
        {
            for(t=1;t<=v[i];t++,j++)
                a[j]=i;
        }
    }
    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
    g<<'\n';
    for(i=1;i<=n;i++)
    {
        if(2*a[i]==a[i-1]+a[i+1])
            g<<1<<" ";
        else
        g<<0<<" ";
    }
    return 0;
}
