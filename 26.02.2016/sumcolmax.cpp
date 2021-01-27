#include <fstream>
#include <climits>

using namespace std;

ifstream f("memory001.in");
ofstream g("memory001.out");

int a[2001][2001];

int main()
{
    long long n,m,i,j,s,smax=LONG_LONG_MAX,nrcol;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(j=1;j<=m;j++)
    {
        s=0;
        for(i=1;i<=n;i++)
            s+=1LL*a[i][j];
        if(s<smax)
        {
            smax=s;
            nrcol=j;
        }
    }
    g<<nrcol;
    return 0;
}
