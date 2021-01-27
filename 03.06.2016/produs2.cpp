#include <fstream>

using namespace std;

ifstream f("produs2.in");
ofstream g("produs2.out");

int v[1000002];
int p[1000002];

int main()
{
    int n,i,prod,pp,nr=0,j,t;
    f>>n>>prod;
    f>>v[1];
    p[1]=v[1];
    p[0]=1;
    p[n+1]=1;
    for(i=2;i<=n;i++)
    {
        f>>v[i];
        p[i]=p[i-1]*v[i];
    }
    t=1;
    while(v[t]>=prod&&t<=n)
        t++;
    while(v[n]>=prod&&n>=1)
        n--;
    for(i=t;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            pp=p[j]/p[i-1];
            if(pp<prod)
                nr++;
        }
    }
    g<<nr;
    return 0;
}
