#include <fstream>
#include <climits>
using namespace std;

ifstream f("memory001.in");
ofstream g("memory001.out");

long long v[1001];

int main()
{
    long long n,m,i,j,s,smin=LONG_LONG_MAX,minim,x;
    f>>n>>m;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=m;j++)
        {
            f>>x;
            v[j]+=x;
        }
    }
    for(j=1;j<=m;j++)
    {
        if(v[j]<smin)
        {
            smin=v[j];
            minim=j;
        }
    }
    g<<minim;
    return 0;
}
