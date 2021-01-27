#include <fstream>

using namespace std;

ifstream f("prodmax.in");
ofstream g("prodmax.out");

int a[101][101],v[101];

int main()
{
    int n,m,i,j,ok,maxim=-1;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(j=1;j<=m;j++)
    {
        ok=1;
        for(i=1;i<=n&&ok;i++)
        {
            if(a[i][j]==0)
            {
                ok=0;
                break;
            }
            if(a[i][j]==2)
                v[j]++;
        }
        if(ok==0)
            v[j]=0;
    }
    for(i=1;i<=m;i++)
    {
        if(v[i]>maxim)
            maxim=v[i];
    }
    for(i=1;i<=m;i++)
    {
        if(v[i]==maxim)
            g<<i<<" ";
    }
    return 0;
}
